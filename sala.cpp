#include <iostream>
#include "sensor.cpp"
#include "atuador.cpp"
using namespace std;

class Sala{

    protected:

        Atuador atuadores[4];
        Sensor sensores[3];     

    public:
        Sala(){}
        /*Sala():sensores{Temperatura()}{}*/

        void addS(const Sensor& sensor,int n){//integrar sensor a sala
            sensores[n]=sensor;
            sensores[n].conectar();
        }

        void addA(const Atuador& atuador,int n){//integrar atuador a sala
            atuadores[n]=atuador;
        }

        void AtualizarSensores(){
            if(sensores[0].conec()==true)sensores[0].atualizarT();
            if(sensores[1].conec()==true)sensores[1].atualizarU();
            if(sensores[2].conec()==true)sensores[2].atualizarL();
            for(int i=0;i<3;i++){
                if(sensores[i].conec()==true){
                    cout<<sensores[i].getNome()<<" "<<sensores[i].getValor()<<endl;
                    //sensores[i].conexao();
                }
            }
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
                if (atuadores[1].getValor()<=35){
                    atuadores[1].ligar();
                    atuadores[2].desligar();
                }else if(atuadores[1].getValor()>80){
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
                if (atuadores[3].getValor()<=150)
                    atuadores[3].ligar();
                else atuadores[3].desligar();
            }        

            for(int i=0;i<4;i++){
                if(sensores[i].conec()==true){
                    cout<<atuadores[i].getNome()<<" -> ";
                    atuadores[i].estado();
                }
            }
        }
};
/*
#include <iostream>
#include "sensor.cpp"
#include "atuador.cpp"

using namespace std;

class Sala {
private:
    Atuador atuadores[3]; // Array fixo para 3 atuadores
    Sensor sensores[3];    // Array fixo para 3 sensores
    int numSensores;       // Contador de sensores adicionados
    int numAtuadores;      // Contador de atuadores adicionados

public:
    Sala() : numSensores(0), numAtuadores(0) {}

    bool adicionarSensor(const Sensor& sensor) {
        if (numSensores < 3) {
            sensores[numSensores] = sensor; // Adiciona o sensor ao array
            numSensores++;
            return true;
        }
        return false; // Retorna falso se o array estiver cheio
    }

    bool adicionarAtuador(const Atuador& atuador) {
        if (numAtuadores < 3) {
            atuadores[numAtuadores] = atuador; // Adiciona o atuador ao array
            numAtuadores++;
            return true;
        }
        return false; // Retorna falso se o array estiver cheio
    }

    void AtualizarSensores() {
        cout << "Atualizando sensores na sala:" << endl;
        for (int i = 0; i < numSensores; i++) {
            sensores[i].atualizar(); // Atualiza o sensor
            cout << sensores[i].getNome() << " leu: " << sensores[i].getValor() << endl; // Exibe o valor lido
        }
    }

    void AtualizarAtuadores() {
        cout << "Atualizando atuadores na sala:" << endl;
        for (int i = 0; i < numAtuadores; i++) {
            atuadores[i].setValor(rand() % 101); // Define um valor aleatório de 0 a 100
            cout << atuadores[i].getNome() << " configurado com valor: " << atuadores[i].getValor() << endl; // Exibe o valor configurado
        }
    }
};
*/