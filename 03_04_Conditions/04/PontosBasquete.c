#include <stdio.h>
int main (){
    
    int distancia;

    printf("Digite a distancia do lancamento (cm): ");
    scanf("%d", &distancia);

    if(distancia <= 800)
        printf("Pontuacao = 1");
    else if(distancia <= 1400)
        printf("Pontuacao = 2");
    else if(distancia <= 2000)
        printf("Pontuacao = 3");
    else
        printf("Distancia invalida");


return 0;
}