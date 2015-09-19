#include <stdio.h>

typedef struct Dijkstra{
  int padre[NODOS]
  int peso[NODOS];
}

Dijkstra *inicializa_lista (Dijkstra lista){
  int contador;
  for(contador=0; contador<=Nodos; contador++){
    lista->padre[contador]=NULL;
    lista->peso[contador]=999;
  }
  return (lista);
}

//  int contadorA, contadorB;
//  for(contadorA=0; contadorA<=Nodos; contadorA++){
//    for(contadorB=0; contadorB<=Nodos; contadorB++){
//      if(grafo->color[contadorA]==("W") && grafo->coste[contadorA][contadorB]>0){
//      }
//    }
//  }
Dijkstra *busqueda(Nodo grafo, Dijkstra lista, int elemento){
  int contador,costo;
  grafo->color[elemento]=("G");
  for(contador=0; contador<=Nodos; contador++);{
    if(grafo->coste[elemento][contador]>0 && grafo->color[contador]=="W"){
      coste=grafo->coste[elemento][contador];
      llenar_lista(lista, elemento, contador, costo);
      busqueda(grafo, lista, contador);
    }else if (grafo->coste[elemento][contador]>0 && grafo->color[contador]=="G"){
      coste=grafo->coste[elemento][contador];
      llenar_lista(lista, elemento, contador, costo);
    }
  }
  return(lista)
}
