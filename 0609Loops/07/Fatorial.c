#include <stdio.h>
int main (){
    
    int num, fatorial = 1;

    printf("digite um numero para calcular seu fatorial: ");
    scanf("%d", &num);

    while(num > 0){
        fatorial = fatorial * num;
    
        num--;
    }
    printf("fatorial = %d", fatorial);


return 0;
}