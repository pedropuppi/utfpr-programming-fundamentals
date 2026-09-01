#include <stdio.h>
int main (){
    
    int h1,h2,hf,min1,min2,minf,s1,s2,sf;

    printf("Digite a primeira hora: ");
    scanf("%d:%d:%d", &h1,&min1,&s1);
    printf("Digite a segunda hora: ");
    scanf("%d:%d:%d", &h2,&min2,&s2);

    if(min1>59 || min2>59 || s1>59 || s2>59){
        printf("Invalido");
    return 0;
    }
    else{
        hf = h1 + h2;
        minf = min1 + min2;
        sf = s1 + s2;
    
        if(sf>59){
        minf++;
        sf = sf - 60;
        }
        if(minf>59){
        hf++;
        minf = minf - 60;
        }
    }
    printf("Soma = %d:%d:%d", hf,minf,sf);
return 0;
}