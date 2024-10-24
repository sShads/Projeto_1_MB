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
    srand(time(NULL));//randomiza cada execucao

    Sala sala_1,sala_2,sala_3;//3 salas criadas
    Sala* salas[3];//vetor de salas
    salas[0]=&sala_1;//atribuindo um ponteiro para cada sala
    salas[1]=&sala_2;
    salas[2]=&sala_3;
    //Sala 1 -> todos sensores e atuadores
    sala_1.addS(Temperatura(),0);//a funcao "addS" integra o sensor a sala
    sala_1.addS(Umidade(),1);
    sala_1.addS(Luminosidade(),2);
    sala_1.addA(Ventilador(),0);//a funcao "addA" integra o atuador a sala
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
    
    //sala_1.setLimiarClaridade(150);
    for(int i=1;i<=1440;i++){//1440 repeticoes
        cout<<"Vez "<<i<<" de 1440"<<endl;//mostra o numero da execucao
        for(int i=0;i<3;i++){//atualizacao das 3 salas
            cout<<endl<<"Atualizando Sensores da Sala "<<i+1<<endl<<endl;
            salas[i]->AtualizarSensores();
            salas[i]->printS();
            cout<<endl<<"Atualizando Atuadores da Sala "<<i+1<<endl<<endl;
            salas[i]->AtualizarAtuadores();
            salas[i]->printA();
            cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
        }
    }cout<<"Fim da execução"<<endl;
    return 0;
}