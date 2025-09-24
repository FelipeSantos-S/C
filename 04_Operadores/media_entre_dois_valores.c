#include <stdio.h>
#include <stdlib.h>

int main() {

    float av1, av2, media1, av3, mediafinal;

    printf("insira o valor da av1: ");

    scanf("%f", &av1);
    
    printf("insira o valor da av2: ");

    scanf("%f", &av2);

    media1 = (av1 + av2) / 2;

    if (media1 < 4) {

        printf("esta reprovado");
    }

    else if (media1 >= 4) {

        printf("insira o valor da av3: ");

        scanf("%f", &av3);

        mediafinal = (media1 + av3) / 2;

        printf("a sua media final foi de: %f", mediafinal);

        if (mediafinal >= 5) {

            printf("voce foi aprovado");
        }

        else {
        
            printf("voce foi reprovado");
        }
    }

    return 0;
}
