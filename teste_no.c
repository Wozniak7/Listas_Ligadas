#include <stdio.h>
#include "no.h"

//argc e argv: equivalente ao String [] args do Java. Lista de argumentos.
//*argv[]: ponteiro de ponteiro.
int main (int argc, char const *argv[]) {
    //no1 e no2 são variáveis de struct no. É a caixinha.
    struct no no1;
    struct no no2;

    //no3 e no4 são ponteiros de struct no. São setas. Não são nós, são ponteiros.
    struct no * no3;
    struct no * no4;

    //a caixinha no1 no campo info, recebe 3.
    no1.info = 3;
    printf ("no1 armazena o valor de %d\n", no1.info);    //usa .info por ser struct

    //Objetivo: estrutura apontada por no4 receber 7 no campo info
    //pode dar erro, pois não tem para onde apontar.
    //no4->info = 7;

    //aloca um valor na struct apontada.
    no3 = aloca_no(7);
    no4 = aloca_no(5);

    if (no3 != NULL) {
        printf ("no3 alocado com sucesso em %p\n", no3);

        //usa "->info" por ser um ponteiro de struct.
        printf ("O no apontado por no3 armazena o valor de %d\n", no3->info);
    }

    //if no4 é verdadeiro, é diferente de zero/NULL.
    if (no4) {
        printf("no4 alocado com sucesso em %p\n", no4);
    }

    printf("foi");
    return 0;
}