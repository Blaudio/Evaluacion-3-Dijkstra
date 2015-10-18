#include <stdio.h>
#include <stdlib.h>
#include "Grafos.h"

typedef struct Dijkstra{
  int padre[NODOS];
  int peso[NODOS];
  char *color[NODOS];
}Dijkstra;

Dijkstra *inicializa_lista(){
	Dijkstra *aux;
	aux = (Dijkstra *)malloc(sizeof(Dijkstra));
	int contador;
	for(contador=0; contador<=NODOS; contador++){
    aux->padre[contador]=-1;
    aux->peso[contador]=999;
    aux->color[contador]=("W");
  }
  return (aux);
}

Dijkstra *llenar_lista(Dijkstra *lista, int elemento, int nuevo, int costo){
  if((lista->peso[nuevo]) > costo){
    lista->peso[nuevo]=costo;
    lista->padre[nuevo]=elemento;
    printf("%i\n",lista->peso[nuevo]);
  } 
  return (lista);
}

Dijkstra *busqueda(Nodo *grafo, Dijkstra *lista, int elemento){
  int contador,costo;
  contador=0;
  lista->color[elemento]=("G");
  //printf("inicializa\n");
  //printf("contador =%i\n",contador);
  for(contador=0; contador<=NODOS; contador++);{
    costo=lista->peso[elemento]+grafo->coste[elemento][contador];
    //printf("costo =%i\n",costo);
    //printf("contador =%i\n",contador);
    if(grafo->coste[elemento][contador]>0 && lista->color[contador]==("W")){
      llenar_lista(lista, elemento, contador, costo);
      busqueda(grafo, lista, contador);
    }else if (grafo->coste[elemento][contador]>0 && lista->color[contador]==("G")){
      llenar_lista(lista, elemento, contador, costo);
    }
  }
  return(lista);
}
