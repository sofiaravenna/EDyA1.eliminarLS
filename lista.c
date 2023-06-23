#include "lista.h"
#include<stdlib.h>
#include<stdio.h>

Nodo *newNodo(int num) {
    Nodo *aux=NULL;
    aux=malloc(sizeof (Nodo));
    if(aux == NULL){
        printf("ERROR al asignar memoria.\n");
        exit(-1);
    } else{
        aux->valor=num;
        aux->sig=NULL;
    }
    return aux;
}

Lista *newLista() {
    Lista *aux=NULL;
    aux= malloc(sizeof (Lista));
    if(aux == NULL){
        printf("ERROR al asignar memoria.\n");
        exit(-1);
    } else{
        aux->cabecera=NULL;
    }
    return aux;
}

void enlistar(Lista *lista, Nodo *nodoInsertar) {
    if(lista->cabecera==NULL){
        lista->cabecera= nodoInsertar;
    }
    else{
        Nodo *aux= lista->cabecera;
        while(aux->sig != NULL){
            aux=aux->sig;
        }
        aux->sig=nodoInsertar;
    }
}

void print(Lista *lista) {
    Nodo *aux= lista->cabecera;
    while(aux != NULL){
        printf("%d\n",aux->valor);
        aux=aux->sig;
    }
    printf("\n");
}

void eliminar(Lista *listaA, Lista *listaB) {
    Nodo *auxA=listaA->cabecera;
    Nodo *ant = NULL;

    while(auxA !=NULL){
        Nodo * auxB=listaB->cabecera;

        while (auxB != NULL && auxB->valor != auxA->valor){
            ant=auxB;
            auxB=auxB->sig;
        }
        if(auxB != NULL){
            if(auxB->valor==auxA->valor){
                if(auxB==listaB->cabecera){
                    listaB->cabecera=auxB->sig;
                }else{
                    if(auxB->sig==NULL){
                        ant->sig=NULL;
                    } else{
                        ant->sig=auxB->sig;
                    }
                }
                free(auxB);
            }
            auxB=ant->sig;
        }
        auxA=auxA->sig;
    }
}