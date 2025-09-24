#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Permite usar acentos e caracteres especiais no terminal
    setlocale(LC_ALL, "");

    // Declaração de variáveis
    int a = 0;
    float b = 0.0;
    char letra = ' ';

    // Entrada e saída para valor inteiro
    // %d escreve o valor da variável do tipo interiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    // Entrada e saída para valor quebrado (float)
    // %f escreve o valor da variável do tipo float
    printf("Digite um valor quebrado (ex: 3.14): ");
    scanf("%f", &b);

    // Entrada e saída para letra
    // Nota: espaço antes de %c para ignorar lixo de buffer
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    // Exibição dos valores lidos
    // \n pula uma linha
    printf("\n--- Valores Digitados ---\n");
    printf("Valor inteiro: %d\n", a);
    printf("Valor quebrado: %.2f\n", b);
    printf("Letra: %c\n", letra);

    return 0;
}

