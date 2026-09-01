#include <stdio.h>

int ehParDeFoolano (unsigned int n1, unsigned int n2);

int main(){

    unsigned int n1,n2;

    printf("Digite o 1o numero: ");
    scanf("%d", &n1);
    printf("Digite o 2o numero: ");
    scanf("%d", &n2);

    if(ehParDeFoolano(n1,n2))
        printf("Eh um par de foolano");
    else
        printf("Nao eh um par de foolano");

return 0;
}

int ehParDeFoolano (unsigned int n1, unsigned int n2){

    unsigned int v[10];

    for(int i=0;i<10;i++)
        v[i] = 0;

    while(n1>0){
            v[n1%10]++;
        n1/=10;
    }
    while(n2>0){
            v[n2%10]--;
        n2/=10;
    }

    for(int i=0;i<10;i++){
        if(v[i] != 0)
            return 0;
    }

    return 1;
}