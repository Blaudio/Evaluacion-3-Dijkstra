#include <stdio.h>
#include <stdlib.h>
#include "Grafos.h"
#include "Dijkstra.h"
#include "Archivos.h"

int main(){
  Nodo *grafo =inicializa_nodo();
  *grafo =agrega_elementos_nodo(grafo);
  Dijkstra *lista =*inicializa_lista();
  *busqueda(grafo, lista, 4);//se comiensa la busqueda con la letra E
  generador_mapa(grafo)
}
