#include <stdio.h>
#define MAX 10
#define VALOR 20
int main (){
    
    int i,num1,num2,divisor;

    printf("Digite dez numeros para calcular a media dos menores que 20:\n");
    
    divisor = 0;
    num2 = 0;
    i = 0;
    while(i<MAX){
        scanf("%d", &num1);
            if(num1<VALOR){
                num2 = num2 + num1;
                divisor++;
            }

        i = i+1;
    }
    printf("Media = %2.f", (float) (num2/divisor));

return 0;
}