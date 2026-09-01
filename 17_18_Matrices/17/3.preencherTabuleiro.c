#include <stdio.h>

int main(){

#define N 6

int tabuleiro [N][N] = {{0,0,1,0,0,0},
                        {1,9,9,9,9,9},
                        {0,9,9,9,9,9},
                        {0,9,9,9,9,9},
                        {1,9,9,9,9,9},
                        {1,9,9,9,9,9}};

            
    for(int i=1;i<N;i++){
        for(int j=1;j<N;j++){
            if(tabuleiro[i][j-1]+tabuleiro[i-1][j-1]+tabuleiro[i-1][j] >= 2)
                tabuleiro[i][j] = 0;
            else
                tabuleiro[i][j] = 1;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d", tabuleiro [i][j]);
        }
        printf("\n");
    }
    return 0;

}