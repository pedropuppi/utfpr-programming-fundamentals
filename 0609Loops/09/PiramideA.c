#include <stdio.h>
int main (){
    int n,i,j;

    printf("Informe um valor n p/ criar um triangulo (nxn) de A: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=i;j<n;j++)
            printf("A");
        
    printf("\n");
    }

return 0;
}