#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b, c;

printf("insira 3 valores");

scanf("%d %d %d", &a, &b, &c);

if (a > 10 && b > 10 && c > 10)
{
    printf("os numeros %d e %d e %d sao mairoes que 10", a, b, c);
}
else{

    printf("um dos numeros é menor que 10");
}

return 0;

}