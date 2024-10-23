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

        virtual void atualizarT(){
            cout<<"atualizar no sensor"<<endl;
             valor=rand() %41;
        };
};