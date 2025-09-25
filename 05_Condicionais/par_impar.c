#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero para saber se ele é par ou impar: ");

    scanf("%d", &num);

    if (num % 2 == 0) {

        printf("O numero %d é par.\n", num);

    } else {
        
        printf("O numero %d é impar.\n", num);
    }

    return 0;
}
