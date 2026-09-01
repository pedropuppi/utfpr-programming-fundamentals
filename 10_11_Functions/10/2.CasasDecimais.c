#include <stdio.h>

double casasDecimais (double x){

while(x>1)
x = x/10;

return x;
}
int main(){
    double num;

printf("Digite um numero para mostrar apenas as casas decimais: ");
scanf("%lf",&num);

printf("%lf",casasDecimais(num));

return 0;
}