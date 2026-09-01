#include <stdio.h>
int main (){
    
    int num, qtd = 1;

    printf("Digite um numero para descobrir a a sequencia de Collatz: ");
    scanf("%d", &num);

    while(num>1){
        
        printf("%d ", num);
        
        if(num%2)
            num = 3 * num + 1;
        else
            num = num / 2;

        qtd++;
    }
        printf("\n%d elementos", qtd);

return 0;
}