#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;

    printf("\n\n--- Operadores de Atribuição ---\n\n");

    printf("Valor inicial de a: %d\n", a);

    a += 5;

    printf("Depois de 'a += 5', a = %d\n", a);

    a -= 2;

    printf("Depois de 'a -= 2', a = %d\n", a);

    a *= 3;

    printf("Depois de 'a *= 3', a = %d\n", a);

    a /= 2;

    printf("Depois de 'a /= 2', a = %d\n", a);

    a %= 4;

    printf("Depois de 'a %%= 4', a = %d\n", a);

    printf("\n\n");
    
    return 0;
}
