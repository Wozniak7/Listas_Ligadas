#include <stdio.h>
#include <stdlib.h>   //nome da biblioteca entre <>, pega da biblioteca homologada
#include "no.h"        //pega da biblioteca que foi criada

struct no * aloca_no (int i) {
    struct no * novo = (struct no *) malloc (sizeof (struct no));
    if (novo != NULL) {
        //-> operador de apontar. é usado quando um ponteiro referencia uma estrutura usada.
        //novo é um ponteiro do struct nó que recebe o endereço de espaço alocado de tamanho do sizeof, logo, do tamanho do struct nó
        novo -> info = i;         //preenche com o valor de i na informação da caixinha
        novo -> proximo = NULL;   //preenche com NULL no proximo da caixinha
        }
    return novo;
};

void exibe_no(struct no *no){
    printf(" | %d | -> ", no->info );
    if(no->proximo == NULL)
        printf("//");
}