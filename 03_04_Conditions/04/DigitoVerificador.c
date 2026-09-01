#include <stdio.h>
int main (){
    int cc, d1, d2, d3, d4, d5, d6, d7, soma, invertido, auxiliar, final;

    printf("Digite o numero da conta-corrente: ");
    scanf("%d", &cc);

    auxiliar = cc;
    
    d3 = cc%10;
    cc = cc/10;
    d2 = cc%10;
    cc = cc/10;
    d1 = cc;

    invertido = d3*100+d2*10+d1;
    soma = invertido + auxiliar;
        
    if(soma >= 1000){
        soma = soma - 1000;
    }
    d4 = soma%10;
    d4 = d4*3;
    soma = soma/10;
    d5 = soma%10;
    d5 = d5*2;
    soma = soma/10;
    d6 = soma;

    final = d6+d5+d4;
    d7 = final % 10;
   
     printf("O digito verificador eh %d", d7);

return 0;
}