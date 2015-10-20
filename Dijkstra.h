#include <stdio.h>
#include <stdlib.h>
#include "Grafos.h"

typedef struct Dijkstra{
  int padre[NODOS];
  int peso[NODOS];
  char color[NODOS];
}Dijkstra;

Dijkstra *inicializa_lista(){
	Dijkstra *aux;
	aux = malloc(sizeof(Dijkstra));
	int contador;
	for(contador=0; contador<NODOS; contador++){
    aux->padre[contador]=-1;
    aux->peso[contador]=999;
    aux->color[contador]='W';
  }
  return (aux);
}


void generador_mapa(){
  FILE* fichero;
  fichero = fopen ("grafo.dot", "wt");
  fprintf(fichero,"digraph ethane {");
  printf("digraph ethane {");
  fclose(fichero);      
}

void agragar_a_generador_mapa(Dijkstra *lista, Nodo *grafo){
	int contador;
  FILE* fichero;
  fichero = fopen ("grafo.dot", "a");
  contador=0;
  fprintf(fichero,"\n");
  printf("\n"); 
  while(contador<NODOS){
    if (lista->color[contador]=='W'){
      fprintf(fichero,"  %c;\n",grafo->nombre[contador]);  
      printf("  %c;\n",grafo->nombre[contador]);  
    }else{
    	if(lista->padre[contador]==-1){
    		fprintf(fichero,"  %c;\n", grafo->nombre[contador]);  
    		printf("  %c;\n", grafo->nombre[contador]);  
    	}else{
    		fprintf(fichero,"  %c --> %c [label=%i];\n", grafo->nombre[lista->padre[contador]], grafo->nombre[contador], lista->peso[contador]);  
    		printf("  %c --> %c [label=%i];\n", grafo->nombre[lista->padre[contador]], grafo->nombre[contador], lista->peso[contador]);  
    	}
    }
  	contador++;
  }
  fclose(fichero);      
}

void finaliza_generador_mapa(){
  FILE* fichero;
  fichero = fopen ("grafo.dot", "a");
  fprintf(fichero,"}\n");
  printf("}\n");
  fclose(fichero);      
}

Dijkstra *llenar_lista(Dijkstra *lista, int elemento, int nuevo, int i, Nodo *grafo){
  if((lista->peso[nuevo]) > i){
    lista->peso[nuevo]=i;
    lista->padre[nuevo]=elemento;
    agragar_a_generador_mapa(lista, grafo);
  } 
  return(lista);
}

Dijkstra *busqueda(Nodo *grafo, Dijkstra *lista, int elemento){
  int contador;
  int i;
  lista->color[elemento]='G';
  contador=0;
  while(contador<NODOS){
    if(grafo->coste[elemento][contador]>0 && lista->color[contador]=='W'){
      i=grafo->coste[elemento][contador]+lista->peso[elemento];
      lista=llenar_lista(lista, elemento, contador, i,grafo);
      lista=busqueda(grafo, lista, contador);
    }else if (grafo->coste[elemento][contador]>0 && lista->color[contador]=='G'){
      lista=llenar_lista(lista, elemento, contador, i,grafo);
    }
  	contador++;
  }
  return(lista);
}
