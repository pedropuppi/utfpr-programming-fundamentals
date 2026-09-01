#include <stdio.h>
int main ()
{
    int segundos,minutos,horas,dias;

    printf ("Digite o numero de segundos: ");
    scanf("%d", &segundos);

    dias = segundos/86400;
    horas = (segundos % 86400)/3600;
    minutos = ((segundos % 86400) % 3600)/60;
    segundos = (((segundos % 86400) % 3600) % 60);

    printf("%d dias, %d horas, %d minutos, %d segundos", dias, horas, minutos, segundos);

 
 return 0;
}