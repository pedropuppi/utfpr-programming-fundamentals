#include <stdio.h>
int main (){
    int n,i,j;

    printf("Infore um valor n para criar um quadrado (nxn) de A: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("A");
        
    printf("\n");
    }

return 0;
}