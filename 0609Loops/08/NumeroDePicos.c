#include <stdio.h>
int main (){
    
    int base,num,numAnt,n_picos=1,pico;

    printf("Qual o tamanho da base da montanha? ");
    scanf("%d", &base);
    if(base<1)
        return 0;
    
    printf("Digite as alturas da montanha:\n");
    scanf("%d", &numAnt);
    pico = numAnt;

    while(base>1){
        scanf("%d", &num);

        if(num > pico){
            pico = num;
            n_picos = 1;
        }
        else if(num == pico && numAnt != num)
            n_picos++;

        numAnt = num;
        base--;
    }
  
    if(n_picos==1)
    printf("A montanha tem apenas 1 pico com %d metros",pico);
    else
    printf("A montanha tem %d picos com %d metros",n_picos,pico);

return 0;
}