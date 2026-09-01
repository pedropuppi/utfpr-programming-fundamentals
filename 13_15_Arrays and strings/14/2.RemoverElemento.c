#include <stdio.h>
#define N 10
int main(){

    int i, posicao, v[N];

    srand (time(0));

    for(i=0;i<N;i++){
        v[i] = rand() % N;
        printf("%d ", v[i]);
    }

    printf("\nDigite uma posicao para remover do vetor: ");
    scanf("%d", &posicao);

    for(i=posicao-1;i<N-1;i++)
        v[i] = v[i+1];

    for(i=0;i<N-1;i++)
        printf("%d ",v[i]);

    return 0;
}
