#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFLEN 1024

char* empacotaString (char* string);

int main(){

    char buffer [BUFLEN];
    char* vetorRes;

    fgets (buffer, BUFLEN, stdin);

    vetorRes = empacotaString (buffer);

    free(buffer);

return 0;
}

char* empacotaString (char* string){

    char* stringNova;
    unsigned int tamanho = strlen(string) + 1; // +1 do \0

    stringNova = (char*) malloc (tamanho * sizeof (char));

    for(int i=0; i<tamanho; i++)
        stringNova[i] = string[i];

    return stringNova;

}