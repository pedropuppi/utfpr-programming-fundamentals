#include <stdio.h>
#include <stdlib.h>

#define N 6

void geraMatrizInca (int matriz [][N]){

    int aux = 1, i,j,k;
    
    for(k=0; k<N; k++){

        for(j=k; j<N-k; j++)
            matriz[k][j] = aux++;

        for(i=1+k; i<N-k; i++)
            matriz[i][N-1-k] = aux++;

        for(j=N-2-k; j>=k; j--)
            matriz[N-1-k][j] = aux++;

        for(i=N-2-k; i>=1+k; i--)
            matriz[i][k] = aux++;
   }
}

int main(){

int m[N][N] = {0}, i,j;

    geraMatrizInca(m);

    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}







