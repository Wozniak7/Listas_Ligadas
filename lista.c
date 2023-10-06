//implementação de uma biblioteca, não é um programa

#include "lista.h"

//só consegue alterar um valor com a referência dele (endereço)
//por isso ponteiro (* l)
void constroi_lista(t_lista * l) {
    l->prim = NULL;
    l->tamanho = 0;
}

//melhor padronizar o l como referência. Assim, não precisa pensar se é l de referência ou de valor
int esta_vazia(t_lista * l) {
    // if (l->tamanho == 0) {
    //     return 1;   devolve true
    // }
    // return 0;   devolve false
    //           ou
    return l->tamanho == 0;    //se for verdade, retorna 1; falso, retorna 0.
}

void insere_inicio(int i, t_lista * l) {
    //"envolveu" o novo valor em um nó.
    struct no * novo = aloca_no(i);
    // if (novo != NULL) {
    //     if (esta_vazia(l)) {
    //         l->prim = novo;
    //     }
    //     else {
    //         novo->proximo = l->prim;
    //         l->prim = novo;
    //     }
    //     l->tamanho++;
    // }
    //          ou
    if (novo != NULL) {
        if (!esta_vazia(l)) {
            novo->proximo = l->prim;
        }
        l->prim = novo;
        l->tamanho++;
    }
}

int remove_inicio(t_lista * l) {
    int i = l->prim->info;          //pega o valor do primeiro elemento
    struct no * aux = l->prim;      //copia do endereço do primeiro elemento da lista
    l->prim = l->prim->proximo;     //torna o segundo elemento em primeiro.
    l->tamanho--;
    free(aux);      //libera o endereço do aux (primeiro elemento a ser removido)
    return i;
}

void exibe_lista (t_lista * l) {
    struct no * aux = l->prim;
    if (esta_vazia(l)) {
        printf("Lista vazia.\n");
    }
    else {
        while (aux != NULL) {
            printf ("|%d| -> ", aux->info);
            aux = aux->proximo;
        }
        printf ("//\n");
    }
}

void insere_fim (int i, t_lista * l) {
    struct no * novo = aloca_no(i);
    struct no * aux = l->prim;
    if (novo != NULL) {
        if (esta_vazia(l)) {       //lista vazia que recebe um valor
            l->prim = novo;
        }
        else {
            while (aux->proximo != NULL) {     //busca pelo último
                aux = aux->proximo;
            }
            aux->proximo = novo;    //adiciona um valor no final da lista
        }
        l->tamanho++;
    }
}

int remove_fim (t_lista * l) {
    int i;
    struct no * aux;
    if (l->prim->proximo == NULL) {     //a lista tem um único elemento
        i = l->prim->info;
        free(l->prim);
        l->prim = NULL;
    }
    else {
        aux = l->prim;
        while (aux->proximo->proximo != NULL) {     //busca pelo penúltimo
            aux = aux->proximo;
        }
        i = aux->proximo->info;     //copia a informação do último nó.
        free(aux->proximo);         //libera o último nó.
        aux->proximo = NULL;        //aponta para um novo nó nulo.
    }
    l->tamanho--;                   //diminui o tamanho da lista
    return i;
}
