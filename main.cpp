#include <iostream>
#include "componente.cpp"
#include "sensor.cpp"
#include "atuador.cpp"
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
    cout<<"teste"<<endl;

    Sala sala_1;
    sala_1.adicionarSensor(Temperatura(),0);
    sala_1.adicionarSensor(Umidade(),1);
    sala_1.adicionarSensor(Luminosidade(),2);

    sala_1.AtualizarSensores();

    return 0;
}
/*
int main() {
    srand(static_cast<unsigned int>(time(0)));

    Sala sala1;
    sala1.adicionarSensor(Temperatura());
    sala1.adicionarSensor(Luminosidade());
    sala1.adicionarAtuador(Ventilador());

    Sala sala2;
    sala2.adicionarSensor(Umidade());
    sala2.adicionarSensor(Temperatura());
    sala2.adicionarAtuador(Umidificador());

    Sala sala3;
    sala3.adicionarSensor(Luminosidade());
    sala3.adicionarSensor(Umidade());
    sala3.adicionarAtuador(Desumidificador());
    sala3.adicionarAtuador(Lampada());

    for (int i = 0; i < 1440; ++i) {
        cout << "========================" << endl;
        sala1.AtualizarSensores();
        sala1.AtualizarAtuadores();
        
        sala2.AtualizarSensores();
        sala2.AtualizarAtuadores();
        
        sala3.AtualizarSensores();
        sala3.AtualizarAtuadores();
    }

    return 0;
}*/