#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int dado1, dado2, dado3, soma;

    srand(time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    soma = dado1 + dado2 + dado3;

    printf("Dado 01: %d\n", dado1);
    printf("Dado 02: %d\n", dado2);
    printf("Dado 01: %d\n", dado3);
    printf("a soma dos 3 dados foi de: %d\n", soma);

    return 0;
}