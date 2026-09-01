#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFLEN 1024

char* concatenaStrings (char* s1, char* s2);

int main(){

    char string1 [BUFLEN], string2[BUFLEN];
    char* vetorRes;

    fgets (string1, BUFLEN, stdin);
    string1[strlen(string1)-1]='\0'; // p tirar o pular linha
    fgets (string2, BUFLEN, stdin);

    vetorRes = concatenaStrings(string1,string2);

    printf("%s", vetorRes);

    free(string1);
    free(string2);

return 0;
}

char* concatenaStrings (char* s1, char* s2){

    char* stringNova;
    unsigned int tamanho1 = strlen(s1), tamanho2 = strlen(s2), tamanhoTotal = tamanho1 + tamanho2 + 1; // +1 do \0
    int i,j;

    stringNova = (char*) malloc ((tamanhoTotal) * sizeof (char));

    for(i=0; i<tamanho1; i++)
        stringNova[i] = s1[i];

    i = 0;
    for(j=tamanho1;j<tamanhoTotal;j++){
        stringNova[j] = s2[i];
        i++;
    }
     stringNova[j] = '\0';

    return stringNova;
}