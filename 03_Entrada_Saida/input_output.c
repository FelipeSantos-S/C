#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct para o exemplo 40
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

// Prototipação das funções
void exemplo1();
void exemplo2();
void exemplo3();
void exemplo4();

int main() {
    int opcao;

    do {
        printf("\n===== EXEMPLOS DE ENTRADA E SAÍDA EM C =====\n");
        printf("1 - Entrada/Saída com scanf e printf\n");
        printf("2 - Entrada de string com fgets e saída com puts\n");
        printf("3 - Escrita e leitura de arquivo (texto)\n");
        printf("4 - Escrita e leitura de arquivo (binário)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do '\n' deixado pelo scanf

        switch (opcao) {
            case 1: exemplo1(); break;
            case 2: exemplo2(); break;
            case 3: exemplo3(); break;
            case 4: exemplo4(); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}

// ===== Exemplo 1: scanf e printf =====
void exemplo1() {
    int idade;

    printf("\n[Exemplo 1] Digite sua idade: ");
    scanf("%d", &idade);
    getchar(); // Limpa o buffer

    printf("Sua idade é: %d anos\n", idade);
}

// ===== Exemplo 2: fgets e puts =====
void exemplo2() {
    char nome[100];

    printf("\n[Exemplo 2] Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' se estiver presente
    nome[strcspn(nome, "\n")] = '\0';

    printf("Olá, ");
    puts(nome);
}

// ===== Exemplo 3: Arquivo texto =====
void exemplo3() {
    FILE *arquivo;
    char texto[100];

    // Abre arquivo para escrita
    arquivo = fopen("saida.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    printf("[Exemplo 3] Digite o texto para salvar no arquivo.\n");
    printf("Digite uma linha vazia para terminar.\n");

    while (1) {
        printf("> ");
        fgets(texto, sizeof(texto), stdin);

        // Se a linha for só o '\n' (linha vazia), para o loop
        if (strcmp(texto, "\n") == 0) {
            break;
        }

        // Escreve no arquivo
        fputs(texto, arquivo);
    }

    fclose(arquivo);
    printf("Texto salvo no arquivo 'saida.txt'.\n");

    // Agora abre o arquivo para leitura e mostra o conteúdo
    arquivo = fopen("saida.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    printf("\nConteúdo do arquivo:\n");
    while (fgets(texto, sizeof(texto), arquivo) != NULL) {
        printf("%s", texto);
    }

    fclose(arquivo);
}

// ===== Exemplo 4: Arquivo binário =====
void exemplo4() {
    Pessoa p1 = {"Felipe", 30}, p2;

    FILE *arquivo = fopen("pessoa.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    fwrite(&p1, sizeof(Pessoa), 1, arquivo);
    fclose(arquivo);
    printf("[Exemplo 4] Dados salvos em 'pessoa.bin'.\n");

    // Leitura
    arquivo = fopen("pessoa.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    fread(&p2, sizeof(Pessoa), 1, arquivo);
    fclose(arquivo);

    printf("Dados lidos:\n");
    printf("Nome: %s\n", p2.nome);
    printf("Idade: %d\n", p2.idade);
}
