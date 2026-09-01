#include <stdio.h>
#include <time.h>

#define M 2
#define N 3

int main(){

    int A[M][N], B[N][M], C[M][M] = {0};
    int i,j,k;

    srand (time(0));

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            A[i][j] = rand() % 11; // gera matriz A
        }
    }

    for(i=0;i<M;i++){ // printa a matriz A no terminal
        for(j=0;j<N;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<N;i++){ // gera matriz B
        for(j=0;j<M;j++){
            B[i][j] = rand() % 11;
        }
    }

    for(i=0;i<N;i++){ // printaa a matriz B no terminal
        for(j=0;j<M;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for(i=0;i<M;i++){ // multiplica as matrizes para gerar a matriz C
        for(j=0;j<M;j++){
            for(k=0; k<N; k++)
            C[i][j] += A[i][k]*B[k][j];
        }
    }

     for(i=0;i<M;i++){ // printa a matriz C no terminal
        for(j=0;j<M;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}