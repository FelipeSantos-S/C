#include <stdio.h>
#include <stdlib.h>

int main(){

int num;

printf("insira um numero");

scanf("%d", &num);

if (num >= 0 && num <= 10)
{
    printf("O numero %d esta entre 0 e 10", num);
}
else{

    printf("o numero %d não esta entre 0 e 10", num);
}

return 0;

}