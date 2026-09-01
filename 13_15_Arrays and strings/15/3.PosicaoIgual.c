#include <stdio.h>

#define N 50

int verificaPosicoes(int* entrada, int* saida);

int main(){


}

int verificaPosicoes(int* entrada, int* saida){

    int i,j,k=0;

    for(i=0; i<N; i++){

        for(j=i+1; j<N; j++)
            if(entrada[j] != entrada[i])
                k++;
                
    }
    return k;
}