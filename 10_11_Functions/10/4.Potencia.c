#include<stdio.h>
unsigned long long potencia (unsigned int base, unsigned int expoente){
    unsigned long long resultado=1;

    while(expoente>0){
        resultado *= base;
        expoente--;
    }
    return resultado;
}
int main(){
    unsigned int base,expoente;

    printf("Digite um numero para calcular sua potencia: ");
    scanf("%d",&base);
    printf("Digite o expoente da potencia: ");
    scanf("%d",&expoente);

    printf("Potencia = %d", potencia(base,expoente));

return 0;
}