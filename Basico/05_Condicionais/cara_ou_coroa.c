#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador1, jogador2, moeda;

    printf("Jogador 1, escolha (0 para CARA, 1 para COROA): ");

    scanf("%d", &jogador1);

    printf("Jogador 2, escolha (0 para CARA, 1 para COROA): ");

    scanf("%d", &jogador2);

    
    srand(time(NULL));
    
    moeda = rand() % 2;

    printf("\nA moeda caiu em: %s\n", (moeda == 0) ? "CARA" : "COROA");

    if (jogador1 == moeda && jogador2 == moeda) {

        printf("Empate! Os dois acertaram.\n");

    } else if (jogador1 == moeda) {
        printf("Jogador 1 venceu!\n");

    } else if (jogador2 == moeda) {
        printf("Jogador 2 venceu!\n");
        
    } else {
        printf("Ninguém acertou!\n");
    }

    return 0;
}
