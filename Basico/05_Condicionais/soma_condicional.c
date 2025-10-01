#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, soma;

    printf("insira o valor do primeiro numero: ");

    scanf("%f", &num1);

    printf("insira o valor do segundo numero: ");
    
    scanf("%f", &num2);

    soma = num1 + num2;

    if (soma >= 10){

        printf("o resultado da soma é maior que 10");
    }
    else {

        printf("o resultado da soma foi menor que 10: %2.f", soma);

    }

    return 0;

}