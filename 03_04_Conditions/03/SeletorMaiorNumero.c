#include <stdio.h>
int main (){
    
    int n1,n2,n3;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1,&n2,&n3);
    
    if(n1 > n2){
        if(n1 > n3)
        printf("o maior eh %d", n1);
    }
    else if(n2 > n3)
    printf("o maior eh %d", n2);
    else
    printf("o maior eh %d", n3);
    
return 0;
}