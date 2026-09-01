#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

int main(){

    char strings[N][128];
        
    for(int i=0;i<N;i++)
        fgets (strings[i], 128, stdin);

    printf("\n");
    
    for(int i=N-1; i>=0; i--)
        printf("%s", strings[i]);


return 0;

}