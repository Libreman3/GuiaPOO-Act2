#include <iostream>
#include "dado.h"
#include <ctime>

void Dado::inicio(){

    _valor = 0;
}

void Dado::lanzar(){
    srand(time(NULL));

    _valor = (rand()%6)+1;
}

int Dado::getValor(){
    std::cout<<_valor<<std::endl<<std::endl;
}

void Dado::esMaximo(){
    if(_valor==6){
        std::cout<<"El valor mostrado en pantalla es el maximo? TRUE"<<std::endl<<std::endl;
    } else{
        std::cout<<"El valor mostrado en pantalla es el maximo? FALSO"<<std::endl<<std::endl;
    }
}

void Dado::esMinimo(){
    if(_valor==1){
        std::cout<<"El valor mostrado en pantalla es el minimo? TRUE"<<std::endl<<std::endl;
    } else {
        std::cout<<"El valor mostrado en pantalla es el minimo? FALSO"<<std::endl<<std::endl;
    }
}
