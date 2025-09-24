#include <stdio.h>
#include <stdlib.h>


int main() {
    int c = 10;

    printf("\n\n--- Operadores de Incremento e Decremento ---\n\n");

    printf("Valor inicial de c: %d\n", c);

    c++;
    printf("Depois de c++: %d\n", c);

    ++c;
    printf("Depois de ++c: %d\n", c);

    c--;
    printf("Depois de c--: %d\n", c);

    --c;
    printf("Depois de --c: %d\n", c);

    printf("\n\n");
    
    return 0;
}
