#include <iostream>
#include "sensor.cpp"
using namespace std;

class Umidade: public Sensor{

    private:

       //0 a 100 (%)

    public:
        Umidade():Sensor("Umidade"){}

        float getUmidadeRelativa(){
            return valor;
        }
};