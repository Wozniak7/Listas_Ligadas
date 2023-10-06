#include <stdio.h>
#include "no.c"

int main (){
    struct no *no1, *no2;
    no1 = aloca_no(10);
    exibe_no(no1);
    no2 = aloca_no(20);
    printf("\n");
    exibe_no(no2);

    no1->proximo = no2;
    printf("\n");
    exibe_no(no1->proximo);

    no2->proximo = no1;
    printf("\n");
    exibe_no(no1->proximo->proximo);

    return 0;
}