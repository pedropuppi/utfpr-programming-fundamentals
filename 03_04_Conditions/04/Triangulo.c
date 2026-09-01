#include <stdio.h>
int main (){
    
    int a,b,c;

    printf("Digite 3 valores para os possiveis lados de um triangulo: ");
    scanf("%d %d %d", &a,&b,&c);

    if((a+b > c) && (a+c > b) && (b+c > a))
        if(a==b && a==c)
            printf("Eh um triangulo possivel e equilatero");
        else if(a!=b && a!=c && b!=c)
            printf("Eh um triangulo possivel e escaleno");
        else
            printf("Eh um triangulo possivel e isosceles");
    else
    printf("Nao eh um triangulo possivel");

return 0;
}