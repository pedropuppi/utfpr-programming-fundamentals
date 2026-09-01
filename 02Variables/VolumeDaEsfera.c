#include <stdio.h>
#include <math.h>
int main ()
{
 float raio, volume;

 printf("Digite o valor do raio: ");
 scanf("%f", &raio);

 volume = (4.0/3)*M_PI*raio*raio*raio;

 printf("Volume = %f", volume);

 return 0;
}