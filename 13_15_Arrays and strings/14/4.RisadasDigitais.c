#include <stdio.h>
#include <string.h>

#define N 50

int risadaMaisEngracada(char* risada);

int main(){

    char risada[N];

    fgets(risada, N, stdin);

    if(risadaMaisEngracada(risada))
        printf("eh das mais engracadas");
    else
        printf("nao eh das mais engracadas");

    return 0;
}

int risadaMaisEngracada(char* risada){

    char aux[N];
    int i,j=0;

    for(i=0; risada[i]!='\0'; i++){
        if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u'){
            aux[j] = risada[i];
            j++;
        }
    }

    for(i=0; i<j; i++){
        if(aux[i] != aux[j-1])
            return 0;
        j--;
    }
    return 1;
}