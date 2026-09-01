#include <stdio.h>
int main (){
    
    int num, numAnt, cresc = 1, maior_cresc = 0;

    scanf("%d", &numAnt);

    while(numAnt > 0 || num > 0){
        scanf("%d", &num);
           
            if(num > numAnt)
                cresc++;
            if(num <= numAnt){
                if(maior_cresc < cresc)
                    maior_cresc = cresc;
                cresc = 1;
            }       
            
        numAnt = num;
    }
    
    printf("A maior sequencia crescente tem %d numero(s)", maior_cresc);

return 0;
}