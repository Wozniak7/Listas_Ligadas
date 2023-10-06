#include "lista.h"

int main () {
    t_lista l;
    int i;

    constroi_lista(&l);

    printf("Operacoes no inicio.\n");

    for (i = 10; i <= 50; i += 10) {
        insere_inicio(i, &l);
        exibe_lista(&l);
    }
    while (!esta_vazia(&l)) {
        printf ("%d saiu do inicio.\n", remove_inicio(&l));
        exibe_lista(&l);
    }

    printf("\nOperacoes no final.\n");

    for (i = 10; i <= 50; i += 10) {
        insere_fim(i, &l);
        exibe_lista(&l);
    }
    while (!esta_vazia(&l)) {
        printf ("%d saiu do final.\n", remove_fim(&l));
        exibe_lista(&l);
    }

    return 0;
}
