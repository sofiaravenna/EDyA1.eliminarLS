#ifndef EDYA1_ELIMINARLS_LISTA_H
#define EDYA1_ELIMINARLS_LISTA_H

typedef struct nodo{
    int valor;
    struct nodo * sig;
}Nodo;

typedef struct lista{
    Nodo *cabecera;
}Lista;

Nodo *newNodo(int num);
Lista *newLista();

void enlistar(Lista *lista, Nodo *nodoInsertar);
void eliminar(Lista *listaA, Lista*listaB);
void print(Lista*lista);
#endif //EDYA1_ELIMINARLS_LISTA_H

