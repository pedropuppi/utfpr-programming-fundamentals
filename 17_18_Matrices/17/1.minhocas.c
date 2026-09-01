#include <stdio.h>

int main(){

    #define N_LINHAS 3
    #define N_COLUNAS 4

    int campo [N_LINHAS][N_COLUNAS] = {{81, 28, 240, 10},
                                       {40, 10, 100, 240},
                                       {20, 180, 110, 35}};

    int soma=0, soma_maior=0;

    for(int i=0; i<N_LINHAS;i++){
        for(int j=0; j<N_COLUNAS; j++){
            soma += campo [i][j];
            }   
            if(soma > soma_maior)
                soma_maior = soma;
            soma = 0;
            }
            
     for(int j=0; j<N_COLUNAS;j++){
        soma = 0;
        for(int i=0; i<N_LINHAS; i++){
            soma += campo [i][j];
            }   
            if(soma > soma_maior)
                soma_maior = soma;
            }

    printf("%d", soma_maior);

return 0;

}