#include <stdio.h>
int main (){
    float a,b,c;

    printf("Digite 3 numeros(a,b,c): ");
    scanf("%f %f %f", &a,&b,&c);

    if(a<b && a<c){
        if(b<c)
        printf("%f %f %f", a,b,c);
        else
        printf("%f %f %f", a,c,b);
        }
    else if(b<a && b<c){
        if(a<c)
        printf("%f %f %f", b,a,c);
        else
        printf("%f %f %f", b,c,a);
    }
    else{
        if(b<a)
        printf("%f %f %f", c,b,a);
        else
        printf("%f %f %f", c,a,b);
    }


return 0;
}