#pragma once
#include <string>

class Dado{
private:
    int _valor;
public:
    void inicio();
    void lanzar();
    int getValor();
    void esMaximo();
    void esMinimo();
};
