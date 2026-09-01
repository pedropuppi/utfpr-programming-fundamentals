#include <stdio.h>
int main (){
    
    int i, num, soma;
   
    printf("Digite um numero para saber se eh perfeito: ");
    scanf("%d", &num);

    soma = 0;
    i = num-1;
    while(i>0){
        if(num%i == 0)
        soma = soma + i;

    i--;
    }

    if(soma == num)
        printf("eh perfeito");
    else
        printf("nao eh perfeito");
    
return 0;
}