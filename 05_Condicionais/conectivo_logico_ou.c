#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf("Insira 2 valores: ");

    scanf("%d %d", &a, &b);

    if (a % 2 == 0){

        printf("%d é par\n", a);
    }

    if (b % 2 == 0){

        printf("%d é par\n", b);
    }

    if (a % 2 != 0 && b % 2 != 0){
        
        printf("Nenhum valor é par\n");
    }

    return 0;
}
