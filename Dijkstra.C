#include <stdio.h>

typedef struct Dijkstra{
  char nombre[NODOS];
  Dijkstra *siguiente;
  Dijkstra *alterno;
}
