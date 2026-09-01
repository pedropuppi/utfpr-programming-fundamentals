#include <stdio.h>
    int ehBissexto (int ano){

        if(ano%400==0 || (ano%4==0 && ano%100!=0))
            return(1);
    
    return(0);
    }

    int main (){
        int ano;

        printf("Digite um ano para saber se eh bissexto: ");
        scanf("%d",&ano);

        if(ehBissexto(ano))
            printf("Eh bissexto");
        else
            printf("Nao eh bissexto");
    
    return 0;
    }