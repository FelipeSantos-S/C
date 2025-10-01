#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Insira dois valores: ");
   
    int num1, num2, opcao, resultado;

    scanf("%d %d", &num1, &num2);

    printf("\n       MENU      \n");
    printf("1 - Somar        \n");
    printf("2 - Subtrair     \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("O resultado de %d + %d foi: %d\n", num1, num2, resultado);
        break;

    case 2:
        resultado = num1 - num2;
        printf("O resultado de %d - %d foi: %d\n", num1, num2, resultado);
        break;

    default:
        printf("Nenhuma opção é válida\n");    
    }

    return 0;
}
