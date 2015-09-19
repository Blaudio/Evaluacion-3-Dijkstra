#include <stdio.h>

typedef struct Dijkstra{
  int padre[NODOS]
  int peso[NODOS];
}

Dijkstra *inicializa (Dijkstra lista){
  int contador;
  for(contador=0; contador<=Nodos; contador++){
    lista->padre[contador]=NULL;
    lista->peso[contador]=999;
}
