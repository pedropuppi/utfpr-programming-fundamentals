#include <stdio.h>
int main ()
{
 float media,a,b,c,d,e;
 
 
 printf("Digite 5 valores (a,b,c,d,e): ");
 scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
 media = (a+b)/2;
 printf("Media entre a e b = %.2f\n", media);
 media = (a+b+c)/3;
 printf("Media entre a, b, c = %.2f\n", media);
 media = (a+b+c+d)/4;
 printf("Media entre a, b, c, d = %.2f\n", media);
 media = (a+b+c+d+e)/5;
 printf("Media entre a, b, c, d, e = %.2f\n", media);

 return 0;
}