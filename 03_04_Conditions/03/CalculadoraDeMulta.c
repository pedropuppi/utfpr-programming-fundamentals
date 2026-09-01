#include <stdio.h>
int main (){
    int multa, vel_motorista, vel_max = 60;

    printf("Digite sua velocidade (km/h): ");
    scanf("%d", &vel_motorista);

    multa = 50*(vel_motorista - vel_max);

    if(multa > 0)
    printf("Voce foi multado em %d reais", multa);
    else
    printf("Voce nao foi multado");


return 0;
}