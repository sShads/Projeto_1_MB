#include <iostream>
#include "atuador.cpp"
using namespace std;

class Desumidificador: public Atuador{

    private:



    public:
        Desumidificador():Atuador("Desumidificador"){}

        virtual bool setConfiguracao(int config){
            return setValor(config);
        }
};