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
            if(sensores[0].conec()==true)sensores[0].atualizarT();
            if(sensores[1].conec()==true)sensores[1].atualizarU();
            if(sensores[2].conec()==true)sensores[2].atualizarL();
        }

        void AtualizarAtuadores(){
            if(atuadores[0].conec()==true){//temperatura
                atuadores[0].setValor(sensores[0].getValor());
                if (atuadores[0].getValor()>=25)
                    atuadores[0].ligar();
                else atuadores[0].desligar();
            }
            if(atuadores[1].conec()==true){//umidade
                atuadores[1].setValor(sensores[1].getValor());
                if (atuadores[1].getValor()<=45){
                    atuadores[1].ligar();
                    atuadores[2].desligar();
                }else if(atuadores[1].getValor()>70){
                    atuadores[1].desligar();
                    atuadores[2].ligar();
                }
                else{
                    atuadores[1].desligar();
                    atuadores[2].desligar();
                }
            }
            if(atuadores[3].conec()==true){//luminosidade
                atuadores[3].setValor(sensores[2].getValor());
                if (atuadores[3].getValor()<=200)
                    atuadores[3].ligar();
                else atuadores[3].desligar();
            }        
        }

        float getTEmF(float T){
            return (9*T/5)+32;
            //getTemperaturaEmK(T);
        }
        float getTEmK(float T){
            return T+273;
        }

        void printS(){
            if(sensores[0].conec()==true){
                cout<<sensores[0].getNome()<<" C-"<<sensores[0].getValor()<<" F-";
                cout<<getTEmF(sensores[0].getValor())<<" K-"<<getTEmK(sensores[0].getValor())<<endl;
            }
            if(sensores[1].conec()==true)
                cout<<sensores[1].getNome()<<" "<<sensores[1].getValor()<<"%"<<endl;
                //sensores[i].conexao();
            if(sensores[2].conec()==true)
                cout<<sensores[2].getNome()<<" "<<sensores[2].getValor()<<" Lux"<<endl;
        }

        void printA(){
            int n;
            if(atuadores[0].conec()==true){
                if(atuadores[0].getValor()<25)
                    n=0;
                else
                    n=(atuadores[0].getValor()/5)-4;
                cout<<atuadores[0].getNome()<<" -> "<<atuadores[0].estado()<<" Velocidade "<<n<<endl;
            }
            if(atuadores[1].conec()==true)cout<<atuadores[1].getNome()<<" -> "<<atuadores[1].estado()<<endl;
            if(atuadores[2].conec()==true)cout<<atuadores[2].getNome()<<" -> "<<atuadores[2].estado()<<endl;
            if(atuadores[3].conec()==true){
                if(atuadores[3].getValor()>200)
                    n=0;
                else
                    n=4-(atuadores[3].getValor()/50);
                cout<<atuadores[3].getNome()<<" -> "<<atuadores[3].estado()<<" Intensidade "<<n<<endl;
            }
        }

        float getValorSala(){
            return sensores[0].getValor();
        }

};
