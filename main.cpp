#include <iostream>
#include "dado.h"

using namespace std;

int main(){

    Dado dado;

    dado.inicio();

    for(int i=0;i<10;i++){

        dado.lanzar();
        dado.getValor();
        dado.esMaximo();
        dado.esMinimo();

        system ("pause");
    }

    return 0;
}
