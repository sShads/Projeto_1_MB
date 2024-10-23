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
    srand(time(NULL));
/*
    Componente c(true,true,10,"sla");
    cout<<c.getNome()<<endl;
    Componente a("sla");
    a.getNome();*/
    Sala sala_1,sala_2,sala_3;
    Sala* salas[3];
    salas[0]=&sala_1;
    salas[1]=&sala_2;
    salas[2]=&sala_3;
    //Sala 1 -> todos sensores e atuadores
    sala_1.addS(Temperatura(),0);
    sala_1.addS(Umidade(),1);
    sala_1.addS(Luminosidade(),2);
    sala_1.addA(Ventilador(),0);
    sala_1.addA(Umidificador(),1);
    sala_1.addA(Desumidificador(),2);
    sala_1.addA(Lampada(),3);
    //Sala 2 -> sem Stemperatura e Aventilador
    sala_2.addS(Umidade(),1);
    sala_2.addS(Luminosidade(),2);
    sala_2.addA(Umidificador(),1);
    sala_2.addA(Desumidificador(),2);
    sala_2.addA(Lampada(),3);
    //Sala 3 -> sem Sumidade, Aumidificador e Adesumidificador
    sala_3.addS(Temperatura(),0);
    sala_3.addS(Luminosidade(),2);
    sala_3.addA(Ventilador(),0);
    sala_3.addA(Lampada(),3); 
    
    for(int i=0;i<3;i++){
        cout<<endl<<"Atualizando Sensores da Sala "<<i+1<<endl<<endl;
        salas[i]->AtualizarSensores();
        cout<<endl<<"Atualizando Atuadores da Sala "<<i+1<<endl<<endl;
        salas[i]->AtualizarAtuadores();
    }
    
    

    return 0;
}