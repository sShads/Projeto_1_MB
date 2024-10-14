#include <iostream>
#include "atuador.cpp"
using namespace std;

class Umidificador: public Atuador{

    private:



    public:
        Umidificador():Atuador("Umidificador"){}

        bool setConfiguracao(int config){
            return setValor(config);
        }
};