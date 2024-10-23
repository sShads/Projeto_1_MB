#include <iostream>
#include "sensor.cpp"
using namespace std;

class Temperatura: public Sensor{

    private:

        //0 a 40(em celsius)

    public:

        Temperatura():
        Sensor("Temperatura"){}

        float getTemperaturaEmC(){
            return valor;
        }
        
        float getTemperaturaEmF(){
            return (9*valor/5)+32;
        }
        
        float getTemperaturaEmK(){
            return valor+273;
        }
};