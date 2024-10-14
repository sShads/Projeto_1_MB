#include <iostream>
#include "sensor.cpp"
#include "atuador.cpp"
using namespace std;

class Sala{

    private:

        Atuador atuadores[3];
        Sensor sensores[3];     

    public:
        Sala(){
            sensores[0]=Sensor("TEMPERATURA");
            sensores[1]=Sensor("LUMINOSIDADE");
            sensores[2]=Sensor("UMIDADE");
            atuadores[0]=Atuador("VENTILADOR");
            atuadores[1]=Atuador("UMIDIFICADOR");
            atuadores[2]=Atuador("DESUMIDIFICADOR");
            atuadores[3]=Atuador("LAMPADA");
        }

        void AtualizarSensores(){
            for(int i=0;i<3;i++){
                //sensores[i]->atualizar();
            }
        }

        void AtualizarAtuadores(){

        }
};