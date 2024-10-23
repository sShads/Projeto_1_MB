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

        void atualizarT(){
             valor=rand()%20+15;
        };
        void atualizarU(){
            valor=rand()%101;
        };
        void atualizarL(){
            valor=rand()%251;
        };
};