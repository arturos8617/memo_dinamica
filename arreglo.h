#ifndef ARREGLO_H
#define ARREGLO_H
#include <iostream>

using namespace std;

class ArregloDinamico{
    private:
        string *arreglo;
        size_t tam;
        size_t cont;
        const static size_t max=5;
    public:
        ArregloDinamico();
        ~ArregloDinamico();
        void agregar_final(const string &x);
        void agregar_inicio(const string &x);
        string operator[](size_t n){
            return arreglo[n];
        }
        size_t size();
    private:
        void expandir();

};
#endif