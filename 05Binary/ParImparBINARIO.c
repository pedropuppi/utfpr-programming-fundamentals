#include <stdio.h>
int main (){
    
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);
    
    if(num & 1)
    printf("eh impar");
    else
    printf("eh par");

return 0;
}