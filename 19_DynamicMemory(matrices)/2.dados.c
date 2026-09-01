#include <stdio.h>
#include <stdlib.h>

int analisa (int*** in, int largura, int altura, int** out);
int avaliaDado (int* rolagens, int n);

int main(){

    int rolagens;

}

int avaliaDado (int* rolagens, int n){

    int i, resultados[6] = {0};

    for(i=0;i<n;i++)
        resultados[rolagens[i]-1]++;
    
    for(i=0;i<6;i++){
        if(resultados[i] < 15 || resultados[i] > 18)
            return 0;
    }

    return 1;
}

int analisa (int*** in, int largura, int altura, int** out){

    int i,j,soma;

    for(i=0;i<altura;i++){
        for(j=0;j<largura;j++)
            out[i][j] = avaliaDado (in[i][j],100);
    }

    for(i=0;i<altura;i++){
        soma = 0;
        for(j=0;j<largura;j++){
            soma += out[i][j];
            if(soma < largura/2)
                return 1;
            }     
    }

    for(j=0;j<largura;j++){
        soma = 0;
        for(i=0;i<altura;i++){
            soma += out[i][j];
            if(soma < altura/2)
                return 1;    
        }
    }

    return 0;
}