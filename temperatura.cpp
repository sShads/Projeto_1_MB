#include <iostream>
#include "sensor.cpp"
using namespace std;

class Temperatura: public Sensor{

    private:

        //0 a 40(em celsius)

    public:

        Temperatura():Sensor("Temperatura"){}
        void atualizar(){
            valor=rand() %51-10;
        }

        float getTemperaturaEmC(){
            return valor;
        }
        
        float getTemperaturaEmC(){
            return (9*valor/5)+32;
        }
        
        float getTemperaturaEmC(){
            return valor+273;
        }
};