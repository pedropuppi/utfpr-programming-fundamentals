#include <stdio.h>
int main (){
    
    int tam,num1=0,num2=1,num3;

    printf("Digite o tamanho da sequencia de Fibonacci: ");
    scanf("%d", &tam);

    while(tam>0){
        printf("%d ", num1);
        num3 = num1+num2;
        num1 = num2;
        num2 = num3;
    
        tam--;
    }
return 0;
}