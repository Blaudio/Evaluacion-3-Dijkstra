#include <stdio.h>
#define NODOS 7

typedef struct Nodo{
  char nombre[NODOS];
  char color[NODOS];
  int coste[NODOS][NODOS];
}

Nodo *inicializa_nodo(Nodo grafo){
  int contadorA,contadorB
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  for(contadorA=0; contadorA<=Nodos; contadorA++){
     aux->nombre[contadorA]=NULL;
     aux->color[contadorA]=("W");
    for(contadorB=0; contadorB<=Nodos; contadorB++){
      aux->coste[contadorA][contadorB]=0;//ninguno nodo sera vecino de manera predeterminada
    }
  }
  return (aux);
}

Nodo *agrega_elementos_nodo(Nodo grafo){
  grafo->nombre[0]=("A");
  grafo->nombre[1]=("B");
  grafo->nombre[2]=("C");
  grafo->nombre[3]=("D");
  grafo->nombre[4]=("E");
  grafo->nombre[5]=("F");
  grafo->nombre[6]=("G");
  grafo->nombre[7]=("H");
  grafo->coste[0][1]=5;
  grafo->coste[0][5]=3;
  grafo->coste[1][2]=7;
  grafo->coste[2][0]=8;
  grafo->coste[2][4]=4;
  grafo->coste[3][2]=1;
  grafo->coste[3][5]=2;
  grafo->coste[3][6]=5;
  grafo->coste[4][6]=9;
  grafo->coste[4][7]=3;
  grafo->coste[6][5]=4;
  grafo->coste[6][7]=6;
  grafo->coste[7][1]=1;
  return (grafo);
}
