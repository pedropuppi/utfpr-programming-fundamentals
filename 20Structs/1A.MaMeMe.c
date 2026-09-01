#include <stdio.h>

typedef struct {

    float maior;
    float meio;
    float menor;

} MaMeMe;

void troca(float *a, float *b);
MaMeMe classifica (float n1, float n2, float n3);

int main(){

    float n1,n2,n3;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    MaMeMe decresc = classifica (n1,n2,n3);

    printf("%f %f %f", decresc.maior, decresc.meio, decresc.menor);
}

MaMeMe classifica (float n1, float n2, float n3){

    MaMeMe num;

    num.maior = n1;
    num.meio = n2;
    num.menor = n3;

    if(num.meio > num.maior)
        troca(&num.maior,&num.meio);
    
    if(num.menor > num.maior)
        troca(&num.maior,&num.menor);

    if(num.menor > num.meio)
        troca(&num.meio,&num.menor);

    return num;
}

void troca(float *a, float *b){

    float aux;

    aux = *a;
    *a = *b;
    *b = aux;
}