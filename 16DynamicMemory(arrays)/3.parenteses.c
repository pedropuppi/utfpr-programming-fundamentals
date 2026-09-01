#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFLEN 1024

void balanceamentoDeParenteses (char* str, int* parenteses);

int main(){

    char string [BUFLEN], parenteses [BUFLEN];

    fgets (string, BUFLEN, stdin);

    free(string);

return 0;
}

void balanceamentoDeParenteses (char* str, int* parenteses){

    unsigned int tamstr = strlen(str) , ultimoParentese,parenteseAberto;

}



