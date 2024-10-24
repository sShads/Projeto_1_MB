#include <iostream>
#include "sensor.cpp"
#include "atuador.cpp"
using namespace std;

class Sala{

    protected:

        Atuador atuadores[4];
        Sensor sensores[3]; 
        int T;    

    public:
        Sala(){}
        /*Sala():sensores{Temperatura()}{}*/

        void addS(const Sensor& sensor,int n){//integrar sensor a sala
            sensores[n]=sensor;
            sensores[n].conectar();
        }

        void addA(const Atuador& atuador,int n){//integrar atuador a sala
            atuadores[n]=atuador;
            atuadores[n].conectar();
        }

        void AtualizarSensores(){
            //ha sempre uma verificacao para ver se o sensor esta conectado a sala
            if(sensores[0].conexao()==true)sensores[0].atualizarT();
            if(sensores[1].conexao()==true)sensores[1].atualizarU();
            if(sensores[2].conexao()==true)sensores[2].atualizarL();
        }

        void AtualizarAtuadores(){
            //tambem ha sempre uma verificacao para ver se o atuador esta conectado a sala
            if(atuadores[0].conexao()==true){//temperatura
                atuadores[0].setValor(sensores[0].getValor());
                if (atuadores[0].getValor()>=25)//ventilador liga a partir de 25C
                    atuadores[0].ligar();
                else atuadores[0].desligar();
            }
            if(atuadores[1].conexao()==true){//umidade
                atuadores[1].setValor(sensores[1].getValor());
                if (atuadores[1].getValor()<=45){//umidificador ligado ate 45%
                    atuadores[1].ligar();
                    atuadores[2].desligar();
                }else if(atuadores[1].getValor()>70){//desumidificador liga a partir de 70%
                    atuadores[1].desligar();
                    atuadores[2].ligar();
                }
                else{//caso contrario ficam desligados
                    atuadores[1].desligar();
                    atuadores[2].desligar();
                }
            }
            if(atuadores[3].conexao()==true){//luminosidade
                atuadores[3].setValor(sensores[2].getValor());
                if (atuadores[3].getValor()<=200)//lampada ligada ate 200 Lux
                    atuadores[3].ligar();
                else atuadores[3].desligar();
            }        
        }

        float getTEmF(float T){//transforma temperatura de C em F
            return (9*T/5)+32;
            //getTemperaturaEmK(T);
        }
        float getTEmK(float T){//transforma temperatura de C em K
            return T+273;
        }

        void printS(){//mostra os nomes e valores dos sensores
            if(sensores[0].conexao()==true){//temperatura nas 3 unidades
                cout<<sensores[0].getNome()<<" C-"<<sensores[0].getValor()<<" F-";
                cout<<getTEmF(sensores[0].getValor())<<" K-"<<getTEmK(sensores[0].getValor())<<endl;
            }
            if(sensores[1].conexao()==true)//umidade
                cout<<sensores[1].getNome()<<" "<<sensores[1].getValor()<<"%"<<endl;
                //sensores[i].conexao();
            if(sensores[2].conexao()==true)//luminosidade
                cout<<sensores[2].getNome()<<" "<<sensores[2].getValor()<<" Lux"<<endl;
        }

        void printA(){//mostra os nomes, estados e/ou valores de intensidade dos atuadores
            int n;//variavel auxiliar para definir a intensidade do atuador
            if(atuadores[0].conexao()==true){
                if(atuadores[0].getValor()<25)
                    n=0;
                else
                    n=(atuadores[0].getValor()/5)-4;//divisao em 3 niveis de intensidade
                cout<<atuadores[0].getNome()<<" -> "<<atuadores[0].estado()<<" Velocidade "<<n<<endl;
            }
            if(atuadores[1].conexao()==true)cout<<atuadores[1].getNome()<<" -> "<<atuadores[1].estado()<<endl;
            if(atuadores[2].conexao()==true)cout<<atuadores[2].getNome()<<" -> "<<atuadores[2].estado()<<endl;
            if(atuadores[3].conexao()==true){
                if(atuadores[3].getValor()>200)
                    n=0;
                else
                    n=4-(atuadores[3].getValor()/50);//divisao em 3 niveis de intensidade
                cout<<atuadores[3].getNome()<<" -> "<<atuadores[3].estado()<<" Intensidade "<<n<<endl;
            }
        }

};
