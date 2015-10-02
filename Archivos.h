#include <stdio.h>
#include <stdlib.h>
#include "Grafos.h"
#include "Dijkstra.h"
#define NODOS 7

void generador_mapa(Dijkstra lista, Nodo grafo){
  FILE* fichero;
  fichero = fopen ("c:\\grafo.dot", "wt");
  fprintf(fichero,"digraph ethane {\n");
  for(contador=0; contador<=NODOS; contador++);{
    if (lista->color[contador]=="W"){
      fprintf(fichero,"  %s;\n",grafo->nombre[contador]);  
    }else{
      fprintf(fichero,"  %s --> %s [label=%i];\n", grafo->nombre[lista->padre[contador]], grafo->nombre[contador], lista->peso[contador]);  
    }
  }
  fprintf(fichero,"}\n");
  fclose(fichero);      
  return(1);
}
