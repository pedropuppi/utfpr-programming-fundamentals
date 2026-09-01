#include <stdio.h>
#include <time.h>
#define N 10
int main(){

    int i, soma=0, vetor[N], acima=0, abaixo=0;

    srand (time(0));

    for(i=0;i<N;i++)
        vetor[i] = rand() % 81 + 21;

    for(i=0;i<N;i++)
        soma += vetor[i];

    for(i=0;i<N;i++){
        if(vetor[i] > soma/N){
            printf("%d, acima da media\n", vetor[i]);
            acima++;
        }
        else if(vetor[i] < soma/N){
            printf("%d, abaixo da media\n", vetor[i]);
            abaixo++;
        }
        else
            printf("%d, na media\n", vetor[i]);     
    }

    printf("\n %d acima da media, %d abaixo da media", acima,abaixo);

return 0;
}