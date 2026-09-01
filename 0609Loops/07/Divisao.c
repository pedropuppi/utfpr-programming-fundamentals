#include <stdio.h>
int main (){
    
    int divisor, dividendo, quociente = 1, resto;

    printf("Qual o dividendo? "); 
    scanf("%d", &dividendo);
    printf("Qual o divisor? "); 
    scanf("%d", &divisor);

    while((dividendo - divisor) >= divisor){


        dividendo = dividendo - divisor; 
        quociente++; 
    }
    
    resto = dividendo - divisor;
    if(resto < 0){
        resto = 0;
        quociente = 0;
    }

    printf("Resto = %d\nQuociente = %d\n", resto, quociente);

return 0;
}