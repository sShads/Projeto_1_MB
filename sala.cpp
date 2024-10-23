#include <iostream>
#include "sensor.cpp"
#include "atuador.cpp"
using namespace std;

class Sala{

    protected:

        Atuador atuadores[3];
        Sensor sensores[3];     

    public:
        Sala(){}

        void adicionarSensor(const Sensor& sensor, int n) {
            sensores[n] = sensor;
        }

        void adicionarAtuador(const Atuador& atuador, int n) {
            atuadores[n] = atuador;
        }

        /*void AtualizarSensores(){
            for(int i=0;i<3;i++){
                sensores[i].atualizar();
                cout<<sensores[i].getNome()<<endl;
                cout<<sensores[i].getValor()<<endl;
                //((Temperatura)sensor).getValor();
            }
        }*/
        void AtualizarSensores(){
            for(int i=0;i<1;i++){
                sensores[0].atualizarT();
                cout<<sensores[i].getNome()<<endl;
                cout<<sensores[i].getValor()<<endl;
                //((Temperatura)sensor).getValor();
            }
        }

        void AtualizarAtuadores(){


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