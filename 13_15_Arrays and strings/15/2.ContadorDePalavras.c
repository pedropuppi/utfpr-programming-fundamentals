#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 100

int contaPalavras(char* string)
{
    int i;
    int cont=0;

    for(i=0; string[i]!='\0'; i++)
    {
        if((string[i] >= 'A' || string[i] >= 'a') && (string[i] <= 'Z' || string[i] <= 'z') && !((string[i+1] >= 'A' || string[i+1] >= 'a') && (string[i+1] <= 'Z' || string[i+1] <= 'z')))
                cont++;    
    }
    
    return cont;
}

int main()
{
    char string[N];
    int x;

    fgets(string, N, stdin);

    x=contaPalavras(string);

    printf("%d", x);

}