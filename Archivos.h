#include <stdio.h>
#include <stdlib.h>
#define NODOS 7

void generador_mapa(Dijkstra lista){
  FILE* fichero;
  char columna[80] = "c:\\grafo.txt";
  char fila[81];
  fichero = fopen ("c:\\grafo.txt", "wt");
  for(contador=0; contador<=Nodos; contador++);{
  //  fputs("?????????????\n",lista->padre,lista->padre,lista->padre,fichero);
  }
  fclose(fichero);           
}
