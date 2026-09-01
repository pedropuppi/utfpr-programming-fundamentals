#include <stdio.h>
int arredonda(double x){

    if(x>0)
    return x+0.5;

return x-0.5;
}

int main(){
    double arredondado;

    printf("Digite um numero para arredondar: ");
    scanf("%lf", &arredondado);
    
    printf("%d", arredonda(arredondado));

return 0;
}