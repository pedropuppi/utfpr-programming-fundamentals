#include <stdio.h>
int main (){

    int num, resto, invertido = 0;
    
    printf("Digite um numero para ver se eh palindromo: ");
    scanf("%d", &num); // 121

    while(num>0){
        resto = num%10; // resto = 1 // resto 2 // resto 1
        invertido *= 100 ;
        
        num /= 10;
    }

    if(invertido == num)
        printf("eh palindromo");
    else
        printf("nao eh palindromo");
    
    

return 0;
}