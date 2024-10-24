#include <iostream>
#include "sensor.cpp"
using namespace std;

class Temperatura: public Sensor{

    private:

        //0 a 40(em celsius)

    public:

        Temperatura():
        Sensor("Temperatura"){}

        float getTemperaturaEmC(float T){
            return T;
            getTemperaturaEmF(T);
        }
        
        float getTemperaturaEmF(float T){
            return (9*T/5)+32;
            getTemperaturaEmK(T);
        }
        
        float getTemperaturaEmK(float T){
            return T+273;
        }
};