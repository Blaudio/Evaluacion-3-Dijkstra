#include <stdio.h>
#include <stdlib.h>
#define NODOS 7

typedef struct _Nodo{
  char *nombre[NODOS];
  int coste[NODOS][NODOS];
}Nodo;

Nodo *inicializa_nodo(){
  int contadorA,contadorB;
  Nodo *aux;
  aux = (Nodo *)malloc(sizeof(Nodo));
  for(contadorA=0; contadorA<=NODOS; contadorA++){
     aux->nombre[contadorA]=NULL;
    for(contadorB=0; contadorB<=NODOS; contadorB++){
      aux->coste[contadorA][contadorB]=0;//ninguno nodo sera vecino de manera predeterminada
    }
  }
  return (aux);
}

Nodo *agrega_elementos_nodo(Nodo *aux){
  aux->nombre[0]=("A");
  aux->nombre[1]=("B");
  aux->nombre[2]=("C");
  aux->nombre[3]=("D");
  aux->nombre[4]=("E");
  aux->nombre[5]=("F");
  aux->nombre[6]=("G");
  aux->nombre[7]=("H");
  aux->coste[0][1]=5;
  aux->coste[0][5]=3;
  aux->coste[1][2]=7;
  aux->coste[2][0]=8;
  aux->coste[2][4]=4;
  aux->coste[3][2]=1;
  aux->coste[3][5]=2;
  aux->coste[3][6]=5;
  aux->coste[4][6]=9;
  aux->coste[4][7]=3;
  aux->coste[6][5]=4;
  aux->coste[6][7]=6;
  aux->coste[7][1]=1;
  return (aux);
}
