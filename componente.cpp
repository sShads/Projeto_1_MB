#pragma once
#include <iostream>
using namespace std;

class Componente{

    protected:

        bool ligado;
        bool conectado;
        int valor;
        string nome;

    public:
        Componente(){}
        Componente(bool ligado, bool conectado, int valor, string nome):
        ligado{false},conectado{false},valor{0},nome{nome}{}
        Componente(string nome):ligado(false),conectado(false),valor(0),nome{nome}{};

        void ligar(){
            this->ligado=true;
        }

        void desligar(){
            this->ligado=false;
        }

        bool conectar(){
            this->ligado=true;
            return conectado;
        }

        void desconectar(){
            this->ligado=false;
            cout<<"desconectado"<<endl;
        }

        string getNome(){
            return this->nome;
        }

        int getValor(){
            return this->valor; 
        }
};