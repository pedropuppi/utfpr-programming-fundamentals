#include <stdio.h>
void segundosParaHMS (int total_segundos, int *h, int *m, int *s);

int main(){
    int segundos,hr,min,seg;

    printf("Digite o total de segundos: ");
    scanf("%d", &segundos);

    segundosParaHMS(segundos,&hr,&min,&seg);

    printf("%d:%d:%d", hr, min, seg);
}
void segundosParaHMS (int total_segundos, int *h, int *m, int *s){

*h = total_segundos/3600;
*m = (total_segundos%3600)/60;
*s = total_segundos%3600%60;
}