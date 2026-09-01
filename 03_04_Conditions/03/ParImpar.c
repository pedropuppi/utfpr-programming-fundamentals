#include <stdio.h>
int main (){

    int num;

    scanf("%d", &num);

    if((!(num % 2) && num > 10) || (num % 2 && num < 50))
    printf("SIM");
    else
    printf("NAO");

return 0;
}