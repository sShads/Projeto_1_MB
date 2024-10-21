#pragma once
#include <iostream>
#include "componente.cpp"
using namespace std;

class Sensor: public Componente{

    private:



    public:
        Sensor(){}
        Sensor(string nome):
        Componente(nome){}

        virtual void atualizar(){
            
            
        };
};