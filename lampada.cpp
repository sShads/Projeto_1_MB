#include <iostream>
#include "atuador.cpp"
using namespace std;

class Lampada: public Atuador{

    private:



    public:
        Lampada():Atuador("Lampada"){}

        bool setBrilho(int brilho){
            return setValor(brilho);
        }
};