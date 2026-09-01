#include <stdio.h>
int main (){
    
    int num,i;

    printf("Digite um numero para mostrar a tabuada: ");
    scanf("%d", &num);

    i = 1;
    while(i<11){
    printf("%d\n", i*num);
    i = i+1;
    }
return 0;
}