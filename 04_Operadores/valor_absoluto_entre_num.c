#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float num1, num2, diferenca;

    printf("Insira o primeiro valor: ");

    scanf("%f", &num1); // %f e &num1

    printf("Insira o segundo valor: ");
    
    scanf("%f", &num2); // %f e &num2

    diferenca = fabs(num1 - num2); // Calcula valor absoluto

    printf("O valor de |num1 - num2| é: %.2f\n", diferenca);

    return 0;
}
