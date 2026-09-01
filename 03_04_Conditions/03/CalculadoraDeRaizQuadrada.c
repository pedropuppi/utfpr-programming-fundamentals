#include <stdio.h>
#include <math.h>
int main ()
{
    int num;
    printf("Digite um numero: ");
    scanf ("%d", &num);

    if (num > 0)
    { 
          printf("%f", sqrt(num));
    }
    else
    printf("Nao foi possivel calcular");

return 0;


}