#include <stdio.h>
#include <stdlib.h>
#include "Dijkstra.h"
#define ELEMENTO_INICIAL 4

int main(){
  Nodo *grafo =inicializa_nodo();
  grafo =agrega_elementos_nodo(grafo);
  Dijkstra *lista;
  lista=inicializa_lista();
  int i;
  generador_mapa();
  lista->peso[ELEMENTO_INICIAL]=0;
  lista=busqueda(grafo, lista, ELEMENTO_INICIAL);//se comiensa la busqueda con la letra E
  finaliza_generador_mapa();
}
