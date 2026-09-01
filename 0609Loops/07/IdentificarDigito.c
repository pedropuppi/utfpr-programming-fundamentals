#include <stdio.h>
int main (){
    
    int num, digito, igual = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite um digito: ");
    scanf("%d", &digito);

    while(num > 0 && !(igual)){

        if(num%10 == digito)
            igual = 1;

        num = num/10;
    }

    if(igual)
    printf("O numero possui o digito");
    else
    printf("O numero nao possui o digito");


return 0;
}