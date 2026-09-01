#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define I0 -40
#define IF 40
int main(){

    float soma=0, vetor[N], pos=0;
    int i;

    srand (time(0));

    for(i=0;i<N;i++){
        vetor[i] = (rand() / (float) RAND_MAX) * (IF-I0) + I0;
        if(vetor[i] > 0){
            soma += vetor[i];
            pos++;
        }
    }
        

    for(i=0;i<N;i++){
        if(vetor[i] > 0){
            if(vetor[i] > soma/pos)
                printf("%.2f, acima da media\n", vetor[i]);
            else if(vetor[i] < soma/pos)
                printf("%.2f, abaixo da media\n", vetor[i]);
            else
                printf("%.2f, na media\n", vetor[i]);
        }     
    }

return 0;
}