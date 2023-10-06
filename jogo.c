#include <time.h>
#include "lista.h"

int main (int argc, char const *argv[]) {
    srand(time(0));
    t_lista l;
    constroi_lista(&l);
    do {
        if (rand() % 2 == 0) {      //se for par, insere
            if (rand() % 2 == 0) {  //inicio
                insere_inicio(rand()%10, &l);
            }
            else {      //fim
                insere_fim(rand()%10, &l);
            }
        }
        else {      //se for impar, remove
            if (!esta_vazia(&l)) {
                if(rand() % 2 == 0) {
                    printf("%d saiu do inicio.\n", remove_inicio(&l));
                }
                else {
                    printf("%d saio do final.\n", remove_fim(&l));
                }
            }
        }
        exibe_lista(&l);
    } while (!esta_vazia(&l));
    return 0;
}