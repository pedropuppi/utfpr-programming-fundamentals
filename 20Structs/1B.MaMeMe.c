#include <stdio.h>

typedef struct {

    float maior;
    float meio;
    float menor;

} MaMeMe;

void troca(float *a, float *b);
void classifica (MaMeMe* valores);

int main(){

    float n1,n2,n3;
    MaMeMe num;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    num.maior = n1;
    num.meio = n2;
    num.menor = n3;

    classifica(&num);

    printf("%f %f %f", num.maior, num.meio, num.menor);
}

void classifica (MaMeMe* valores){

    if(valores->meio > valores->maior)
        troca(&valores->maior,&valores->meio);
    
    if(valores->menor > valores->maior)
        troca(&valores->maior,&valores->menor);

    if(valores->menor > valores->meio)
        troca(&valores->meio, &valores->menor);
}

void troca(float *a, float *b){

    float aux;

    aux = *a;
    *a = *b;
    *b = aux;
}


