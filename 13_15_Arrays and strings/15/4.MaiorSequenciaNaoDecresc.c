#include <stdio.h>

#define N 7

int tamMaiorSeqNDec (int* val, int n, int* inicio, int* fim);

int main(){

    int numeros[N], inicio=0, fim, maiorSeq=0;

    for(int i=0; i<N; i++)
        scanf("%d", &numeros[i]);

    maiorSeq = tamMaiorSeqNDec(numeros, N, &inicio, &fim);

    printf("a maior seq n decresc tem %d numeros\neh iniciada na posicao %d e termina na posicao %d", maiorSeq, inicio, fim);

    return 0;
}

int tamMaiorSeqNDec (int* val, int n, int* inicio, int* fim){

    int i;
    int cont=1, maior;

    for(i=0; i<n; i++){
        
        if(val[i] > val[i+1]){
            val[i] = cont;
            cont=1;
        }
        else{
            val[i] = cont;
            cont++;
        }
    }
   
    maior = val[0];

    for(i=1; i<n; i++){
        if(val[i] > val[i-1] && val[i] > maior){
            maior = val[i];
            *inicio = i - val[i] + 1;
            *fim = i;
        }
    }

return maior;

}