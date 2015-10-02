#include <stdio.h>
#include <stdlib.h>
#define NODOS 7

void generador_mapa(Dijkstra lista){
  FILE* fichero;
  //char columna[80] = "c:\\grafo.dot";
  //char fila[81];
  fichero = fopen ("c:\\grafo.dot", "wt");
  fprintf(fichero,"disgraph grafo{\n");
  fprintf(fichero,"  splines = true;\n");
  fprintf(fichero,"  node [style=filled, fillcolor=white, fontcolor=black];\n");
  fprintf(fichero,"  edge [color=black];\n");
  for(contador=0; contador<=NODOS; contador++);{
    fprintf(fichero,"  %i [label=\"%s\"];\n",contador, lista->color[contador]);
  }
  fprintf(fichero,"}\n");
  fclose(fichero);      
  return(1);
}
