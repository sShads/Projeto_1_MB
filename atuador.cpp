#pragma once
#include <iostream>
#include "componente.cpp"
using namespace std;

class Atuador: public Componente{

    private:



    public:
        Atuador();
        Atuador(bool ligado, bool conectado, int valor, string nome):
        Componente(ligado,conectado,valor,nome){}
        Atuador(string nome):Componente(nome){}

        bool setValor(int v){
            if(v >= 0 && v<=100){
                valor=v;
                return true;
            }
            return false;
            
        }
};