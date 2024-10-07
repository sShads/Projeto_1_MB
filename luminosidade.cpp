#include <iostream>
#include "sensor.cpp"
using namespace std;

class Luminosidade: public Sensor{

    private:

        int limiarClaridade;//0 a 250 Lux com limiar 200

    public:

        void setLimiarClaridade(int limiar){
            this->limiarClaridade=limiar;
        }

        bool EstaClaro(){

        }
};