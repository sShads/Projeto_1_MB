#include <iostream>
//#include "componente.cpp"
//#include "sensor.cpp"
//#include "atuador.cpp"
#include "temperatura.cpp"
#include "luminosidade.cpp"
#include "umidade.cpp"
#include "ventilador.cpp"
#include "umidificador.cpp"
#include "desumidificador.cpp"
#include "lampada.cpp"
#include "sala.cpp"
using namespace std;
// g++ *.cpp    ./a.out 

int main(){
    cout<<"inicio"<<endl;

/*
    Componente c(true,true,10,"sla");
    cout<<c.getNome()<<endl;
    Componente a("sla");
    a.getNome();*/

    Sala sala_1;
    sala_1.adicionarSensor(Temperatura(),0);
    sala_1.adicionarSensor(Umidade(),1);
    sala_1.adicionarSensor(Luminosidade(),2);
    /*sala_1.adicionarAtuador(Ventilador(),0);
    sala_1.adicionarAtuador(Umidificador(),0);
    sala_1.adicionarAtuador(Desumidificador(),0);
    sala_1.adicionarAtuador(Lampada(),0);
    Sala sala_2;
    sala_2.adicionarSensor(Temperatura(),0);
    sala_2.adicionarSensor(Umidade(),1);
    sala_2.adicionarSensor(Luminosidade(),2);
    sala_2.adicionarAtuador(Ventilador(),0);
    sala_2.adicionarAtuador(Umidificador(),0);
    sala_2.adicionarAtuador(Desumidificador(),0);
    sala_2.adicionarAtuador(Lampada(),0);
    Sala sala_3;
    sala_3.adicionarSensor(Temperatura(),0);
    sala_3.adicionarSensor(Umidade(),1);
    sala_3.adicionarSensor(Luminosidade(),2);
    sala_3.adicionarAtuador(Ventilador(),0);
    sala_3.adicionarAtuador(Umidificador(),0);
    sala_3.adicionarAtuador(Desumidificador(),0);
    sala_3.adicionarAtuador(Lampada(),0);*/   
    sala_1.AtualizarSensores();

    
    

    return 0;
}