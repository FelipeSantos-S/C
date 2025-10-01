#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, soma;

    printf("Insira dois valores: ");

    scanf("%d %d", &a, &b);

    soma = a + b;

    if ((soma >= 0 && soma <= 10) || (soma % 2 == 0)) {

        printf("O valor %d esta entre 0 e 10 ou %d é par", soma, soma);
    }

    else {

        printf("o valor %d não esta entre 0 e 10 ou %d é impar",soma ,soma);
    }

    return 0;
}
