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
        /*Componente(bool ligado, bool conectado, int valor, string nome):
        ligado{false},conectado{true},valor{0},nome{nome}{}*/
        Componente(string nome):ligado(false),conectado(false),valor(0),nome{nome}{};

        void ligar(){
            this->ligado=true;
        }

        void desligar(){
            this->ligado=false;
        }

        void estado(){
            if (ligado==true)
                cout<<"ligado"<<endl;
            else
                cout<<"desligado"<<endl;
        }

        bool conectar(){
            this->conectado=true;
            return conectado;
        }

        void desconectar(){
            this->conectado=false;
            cout<<"desconectado"<<endl;
        }

        void conexao(){
            if (conectado==true)
                cout<<"conectado"<<endl;
            else
                cout<<"desconectado"<<endl;
        }

        bool conec(){
            return conectado;
        }

        string getNome(){
            return this->nome;
        }

        int getValor(){
            return this->valor; 
        }
};