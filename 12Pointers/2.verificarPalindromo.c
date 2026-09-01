#include <stdio.h>
void removeExtremos (int *n, int *pri, int *ult);

int main(){

    int numero, primeiro, ultimo, iguais=1;

    printf("Digite um numero para verificar se eh palindromo: ");
    scanf("%d", &numero);

    
    while(numero && iguais == 1){
        removeExtremos(&numero,&primeiro,&ultimo);
        if(primeiro!=ultimo)
            iguais = 0;
    }
    if(iguais)
        printf("eh palindromo");
    else
        printf("nao eh palindromo");

return 0;
}


void removeExtremos (int *n, int *pri, int *ult)
{
int tn, pot = 1;
tn = *n;
while(tn >= 10)
{
tn = tn/10;
pot *= 10;
}
*pri = *n / pot;
*ult = *n % 10;
*n = *n % pot;
*n = *n / 10;
}