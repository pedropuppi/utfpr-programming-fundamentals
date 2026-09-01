#include <stdio.h>
int main (){
    
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num<0)
    printf("%f", (-1)*num);
    else
    printf("%f", num);

return 0;
}