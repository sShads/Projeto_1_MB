#pragma once
#include <iostream>
using namespace std;

class Componente{

    protected:

        bool ligado;
        bool conectado;
        //o parametro "conectado" foi utilizado para verificar se o componente esta disponivel na sala em questao
        int valor;
        string nome;

    public:
        Componente(){}
        Componente(string nome):ligado(false),conectado(false),valor(0),nome{nome}{};//contrutor utilizado para componente

        void ligar(){
            this->ligado=true;
        }

        void desligar(){
            this->ligado=false;
        }

        string estado(){//retorna o estado em que esta o atuador
            if (ligado==true)
                return "ligado";
            else
                return "desligado";
        }

        bool conectar(){
            this->conectado=true;
            return conectado;
        }

        void desconectar(){
            this->conectado=false;
            cout<<"desconectado"<<endl;
        }

        bool conexao(){//verifica se o componente esta conectado
            return conectado;
        }

        string getNome(){//retorna o nome do componente
            return this->nome;
        }

        int getValor(){//retorna o valor do componente
            return this->valor; 
        }
};