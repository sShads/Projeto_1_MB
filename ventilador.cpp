#include <iostream>
#include "atuador.cpp"
using namespace std;

class Ventilador: public Atuador{

    private:



    public:
        Ventilador():Atuador("Ventilador"){}

        bool setVelocidade(int velocidade){
            return setValor(velocidade);
        }
};