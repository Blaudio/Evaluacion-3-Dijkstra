#include <stdio.h>
#define NODOS 7

typedef struct Dijkstra{
  int padre[NODOS];
  int peso[NODOS];
  char color[NODOS];
}

Dijkstra *inicializa_lista(){
  int contador;
  for(contador=0; contador<=Nodos; contador++){
    lista->padre[contador]=NULL;
    lista->peso[contador]=999;
    lista->color[contador]=("W");
  }
  return (lista);
}

Dijkstra *busqueda(Nodo grafo, Dijkstra lista, int elemento){
  int contador,costo;
  lista->color[elemento]=("G");
  for(contador=0; contador<=Nodos; contador++);{
    costo=lista->peso[elemento]+grafo->coste[elemento][contador];
    if(grafo->coste[elemento][contador]>0 && lista->color[contador]=="W"){
      llenar_lista(lista, elemento, contador, costo);
      busqueda(grafo, lista, contador);
    }else if (grafo->coste[elemento][contador]>0 && lista->color[contador]=="G"){
      llenar_lista(lista, elemento, contador, costo);
    }
  }
  return(lista);
}

Dijkstra *llenar_lista(Dijkstra lista, int elemento, int nuevo, int costo){
  if(lista->peso[nuevo]>costo){
    lista->peso[nuevo]=costo;
    lista->padre[nuevo]=elemento;
  } 
  return (lista);
}
