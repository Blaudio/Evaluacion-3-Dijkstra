#include <stdio.h>
#define NODOS 7

typedef struct Nodo{
  char nombre[NODOS];
  char color[NODOS];
  int distancia[NODOS];
  int coste[NODOS][NODOS];
  int padre[NODOS];
}
