#include <iostream>
#include "sensor.cpp"
using namespace std;

class Temperatura: public Sensor{

    private:

        //0 a 40(em celsius)

    public:

        float getTemperaturaEmC(){
            //return temperatura;
        }
        
        float getTemperaturaEmC(){
            //(9*temperatura/5)+32
        }
        
        float getTemperaturaEmC(){
            //temperatura+273
        }
};