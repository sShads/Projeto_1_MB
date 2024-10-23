#pragma once
#include <iostream>
#include "componente.cpp"
using namespace std;

class Atuador: public Componente{

    private:



    public:
        Atuador(){}
        Atuador(string nome):
        Componente(nome){}

        bool setValor(int v){
            valor=v;
            return true;
        }
};