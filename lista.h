#include <stdio.h>
#include <stdlib.h>
#include "no.h"

//typedef <nome do tipo de dado> <apelido/novo nome>
//ela não cria um novo tipo, apenas que seja denomidade de forma diferente (outro nome).
typedef
    struct lista {
        struct no * prim;
        int tamanho;
    } t_lista;  //apelido

void constroi_lista(t_lista *);

int esta_vazia(t_lista *);

void insere_inicio(int, t_lista *);
int remove_inicio(t_lista *);

void exibe_lista(t_lista *);

void insere_fim(int, t_lista *);
int remove_fim (t_lista *);
