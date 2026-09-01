#include <stdio.h>
int main (){

    int n,i,j;

    printf("Digite um numero n para formar um triangulo de letras (nxn): ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=i;j<n;j++)
            printf("%c",'A'+i);
    
        printf("\n");
    }

return 0;
}