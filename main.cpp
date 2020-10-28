#include "arreglo.h"
int main(){
    ArregloDinamico ar;
    ar.agregar_final("Arturo");
    ar.agregar_final("Salvador");
    ar.agregar_final("Jesus");
    ar.agregar_final("Peter");
    ar.agregar_final("Cardi");
    ar.agregar_final("Pedro");
    ar.agregar_final("Hector");
    ar.agregar_final("Paul");
    ar.agregar_final("Saul");
    for(size_t i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
    ar.agregar_inicio("Jose Luis");
    ar.agregar_inicio("jose Maria");
    for(size_t i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }
}