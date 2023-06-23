#include <stdio.h>
#include "lista.h"

int main() {
    Lista *listaA=newLista();
    Lista *listaB=newLista();

    enlistar(listaA, newNodo(1));
    enlistar(listaA, newNodo(2));
    enlistar(listaA, newNodo(3));

    enlistar(listaB, newNodo(3));
    enlistar(listaB, newNodo(4));
    enlistar(listaB, newNodo(5));

    printf("lista A:\n");
    print(listaA);
    printf("lista B:\n");
    print(listaB);

    eliminar(listaB,listaA);
    printf("Repetidos eliminados:\n");
    print(listaA);
    print(listaB);
    return 0;
}
