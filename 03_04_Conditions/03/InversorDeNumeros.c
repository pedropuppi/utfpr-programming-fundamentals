#include <stdio.h>
int main (){
    int num, d1, d2, d3;

    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%d", &num);

    d3 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    d1 = num;

    printf("O numero invertido eh = %d", d3*100+d2*10+d1);





return 0;
}