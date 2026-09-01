#include <stdio.h>
#include <string.h>

#define N 100

int main(){

    int n_pedras, n_sapos, posicoes[N] = {0}, tam_pulos[N], posicoes_iniciais[N];
    int i,j;

    printf("Digite o numero de pedras e o numero de sapos: ");
    scanf("%d %d", &n_pedras, &n_sapos);

    for(i=0;i<n_sapos;i++){

        printf("Digite a posicao e a distancia de pulo do sapo %d: ", i+1);
        scanf("%d %d", &posicoes_iniciais[i], &tam_pulos[i]);
    }

    for(i=0;i<n_sapos;i++){

        for(j=posicoes_iniciais[i]; j<n_pedras; j+=tam_pulos[i]) // para a direita
            posicoes[j] = 1;

        for(j=posicoes_iniciais[i]; j>=0; j-=tam_pulos[i]) // para a esquerda
            posicoes[j] = 1;
    }

    for(i=0;i<n_pedras;i++) // imprime as possiveis posicoes finais
        printf("%d", posicoes[i]);

    return 0;
}