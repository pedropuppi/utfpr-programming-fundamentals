#include <stdio.h>
#include <string.h>

#define N 100

char* stling(char* frase, char* buffer);

int main(){

    char frase[N], buffer[N];

    fgets(frase, N, stdin);

    printf("%s", stling(frase, buffer));

    return 0;
}

char* stling(char* frase, char* buffer){
    
    int i,j=0;

    for(i=0; frase[i] != '\0'; i++){

        buffer[j] = frase[i];

        if(frase[i] == 'R' && (frase[i+1] >= 'A' && frase[i+1] <= 'Z'))
            buffer[j] = 'L';

        if(frase[i] == 'R' && frase[i+1] == 'R')
            i++;

        if(frase[i] == 'r' && (frase[i+1] >= 'a' && frase[i+1] <= 'z'))
            buffer[j] = 'l';

        if(frase[i] == 'r' && frase[i+1] == 'r')
            i++;

        j++;
    }

    buffer[j] = '\0'; // evitar que seja retornado lixo junto

    return buffer;
}   