#include <stdio.h>
#define N 5
int main (){
    
    int soma=0,n,div,acumulados=0,eh_primo;

        for(n=2;acumulados<N;n++){
            eh_primo=1;
            
            for(div=2;div<n && eh_primo;div++){
                if(n%div == 0)
                    eh_primo = 0;
        }
            if(eh_primo){
                soma += n;
                    acumulados++;
        }
        }
        printf("a soma dos %d primeiros primos eh igual a %d", N,soma);

return 0;
}