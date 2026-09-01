#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){

    int i,j;
    int tamRes = N*2;
    char mRes[tamRes][tamRes];
    char m[N][N] = {{'A','B','C','D','E'},
                    {' ','B','C','D','E'},
                    {' ',' ','C','D','E'},
                    {' ',' ',' ','D','E'},
                    {' ',' ',' ',' ','E'}};


        for(i=0;i<N;i++){

            for(j=0;j<N;j++)
                mRes[i][j] = m[i][j];
    
            for(j=N-1;j>=0;j--)
                mRes[i][tamRes-j-1] = m[i][j];
        
        }

        for(i=N-1;i>=0;i--){  

            for(j=0;j<N;j++)
                mRes[tamRes-i-1][j] = m[i][j];

            for(j=N-1;j>=0;j--)
                mRes[tamRes-i-1][tamRes-j-1] = m[i][j];
        }

        for(i=0;i<tamRes;i++){
            for(j=0;j<tamRes;j++)
                printf("%c", mRes[i][j]);
            printf("\n");
        }

return 0;

}

