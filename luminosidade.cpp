#include <iostream>
#include "sensor.cpp"
using namespace std;

class Luminosidade: public Sensor{

    private:

        int limiarClaridade;//20 a 250 Lux com limiar 200

    public:
        Luminosidade():Sensor("Luminosidade"){}

        void setLimiarClaridade(int limiar){
            this->limiarClaridade=limiar;
        }

        bool EstaClaro(){//verifica se a sala esta clara o suficiente
            return valor>limiarClaridade;
        }
};