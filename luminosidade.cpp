#include <iostream>
#include "sensor.cpp"
using namespace std;

class Luminosidade: public Sensor{

    private:

        int limiarClaridade;//0 a 250 Lux com limiar 150

    public:
        Luminosidade():Sensor("Luminosidade"){}

        void atualizar(){
            valor=rand()%251;
        }

        void setLimiarClaridade(int limiar){
            this->limiarClaridade=limiar;
        }

        bool EstaClaro(){
            return valor>limiarClaridade;
        }
};