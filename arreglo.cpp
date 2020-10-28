#include "arreglo.h"

ArregloDinamico::ArregloDinamico(){
    arreglo=new string [max];
    tam=max;
    cont=0;
}

ArregloDinamico::~ArregloDinamico(){
    delete[] arreglo;
}

void ArregloDinamico::agregar_final(const string &x){
    if(cont==tam){
        expandir();
    }
    arreglo[cont]=x;
    cont++;
}

void ArregloDinamico::agregar_inicio(const string &x){
    if(cont==tam){
        expandir();
    }
    for(size_t i=cont;i>0;i--){
        arreglo[i]=arreglo[i-1];
    }
    arreglo[0]=x;
    cont++;
}

size_t ArregloDinamico::size(){
    return cont;
}

void ArregloDinamico::expandir()
{
    string *nuevo=new string [tam+max];
    for(int i=0;i<cont;i++){
            nuevo[i]=arreglo[i];
    }
    delete[]arreglo;
    arreglo=nuevo;
    tam=tam+max;
}