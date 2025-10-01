#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1, num2;

    printf("Insira um valor: ");

    scanf("%d", &num1);

    printf("Insira outro valor: ");

    scanf("%d", &num2);

    if (num1 > num2) {

        printf("O maior é: %d", num1);
    }
    
    else if (num1 < num2) {

        printf("O maior é: %d", num2);
    }

    else {

        printf("Os números são iguais");
    }
    
    return 0;
}
