#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){

    int i,j;

    char m[N][N] = {{'A','B','C','D','E'},
                    {' ','B','C','D','E'},
                    {' ',' ','C','D','E'},
                    {' ',' ',' ','D','E'},
                    {' ',' ',' ',' ','E'}};


        for(i=0;i<N;i++){

            for(j=0;j<N;j++)
                printf("%c", m[i][j]);
    
            for(j=N-1;j>=0;j--)
                printf("%c", m[i][j]);

        printf("\n");
        }

        for(i=N-1;i>=0;i--){  

            for(j=0;j<N;j++)
                printf("%c", m[i][j]);;

            for(j=N-1;j>=0;j--)
                printf("%c", m[i][j]);

        printf("\n");
        }

return 0;

}

