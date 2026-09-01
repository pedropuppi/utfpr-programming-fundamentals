#include <stdio.h>
#define N 10

int main (){
    int num;

    num = 0;
    
    printf("intervalo [0,9] com while:\n");

    while(N>num){
        printf("%d\n", num);
        num = num+1;
    }
    printf("intervalo [0,9] com for:\n");

    for(num=0; N>num; num++)
        printf("%d\n", num);

return 0;
}