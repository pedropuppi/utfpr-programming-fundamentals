#include <stdio.h>
#include <stdlib.h>

#define N_AEROPORTOS 6
#define N_VOOS 5

void matrizAdjacencia(int entrada[N_VOOS][2], int saida[N_AEROPORTOS][N_AEROPORTOS]);
int aeroportoMaisVoos(int matrizAdjacencia[N_AEROPORTOS][N_AEROPORTOS]);

int main(){

    int i,j;
    int matrizSaida[N_AEROPORTOS][N_AEROPORTOS] = {0};
    int voos [N_VOOS][2] = {{0,3}, // voo do aeroporto 0 para o aeroporto 3 ou vice-versa
                            {1,3}, // voo do aeroporto 1 para o aeroporto 3 ou vice-versa
                            {2,3}, // ...
                            {4,3},
                            {4,5}};

    matrizAdjacencia(voos,matrizSaida);

    for(i=0;i<N_AEROPORTOS;i++){
        for(j=0;j<N_AEROPORTOS;j++)
            printf("%d", matrizSaida[i][j]);
        printf("\n");
    }

    if(aeroportoMaisVoos(matrizAdjacencia))
        printf("o aeroporto com mais voos eh o A%d", aeroportoMaisVoos(matrizSaida));
    else
        printf("nao existe ou existe mais que um aeroporto com mais voos que outros");

    return 0;
}

void matrizAdjacencia(int entrada[N_VOOS][2], int saida[N_AEROPORTOS][N_AEROPORTOS]){

    int i,j,k;

    // zera o vetor de saida
    for(i=0;i<N_AEROPORTOS;i++){
            for(j=0;j<N_AEROPORTOS;j++)
                saida[i][j] = 0;
    }

    for(k=0;k<N_VOOS;k++){

        for(i=0;i<N_AEROPORTOS;i++){
            for(j=0;j<N_AEROPORTOS;j++){
                
                if(i==entrada[k][0] && j==entrada[k][1])
                    saida[i][j]++;
            }
        }

        for(i=0;i<N_AEROPORTOS;i++){
            for(j=0;j<N_AEROPORTOS;j++){
                
                if(i==entrada[k][1] && j==entrada[k][0])
                    saida[i][j]++;
            }
        }
    }
}

int aeroportoMaisVoos(int matrizAdjacencia[N_AEROPORTOS][N_AEROPORTOS]){

    int i,j;
    int somaAtual=0, somaMaior=0, identificador;

    for(i=0;i<N_AEROPORTOS;i++){
        for(j=0;j<N_AEROPORTOS;j++){
            somaAtual += matrizAdjacencia[i][j];
            somaAtual += matrizAdjacencia[j][i];
        }
        if(somaAtual > somaMaior){
            somaMaior = somaAtual;
            identificador = i;
        }
        somaAtual = 0;
    }

    return identificador;
}