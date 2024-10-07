#pragma once
#include <iostream>
using namespace std;

class Componente{

    private:

        bool ligado;
        bool conectado;
        int valor;
        string nome;

    public:

        Componente(bool ligado, bool conectado, int valor, string nome):
        ligado{false},conectado{false},valor{valor},nome{nome}{}

        void ligar(){
            this->ligado=true;
        }

        void desligar(){
            this->ligado=false;
        }

        bool conectar(){
            this->ligado=true;
        }

        void desconectar(){
            this->ligado=false;
        }

        int getValor(){
            return this->valor; 
        }
};