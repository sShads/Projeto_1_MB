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

        void atualizarT(){//gera um novo valor para temperatura
             valor=rand()%20+15;
             //return valor;
        };
        void atualizarU(){//gera um novo valor para umidade
            valor=rand()%101;
        };
        void atualizarL(){//gera um novo valor para luminosidade
            valor=rand()%201+50;
        };
};