#include <stdio.h>
int main (){
    
    int quant, num, numAnt, cresc = 0, decresc = 0;

    printf("quantos numeros serao digitados? ");
    scanf("%d", &quant);

    scanf("%d", &numAnt);
    quant--;

    while(quant > 0){
        scanf("%d", &num);
           
            if(num > numAnt)
                cresc = 1;
            if(num < numAnt)
                decresc = 1;
            
        numAnt = num;
        quant--;
    }
    
    if(cresc == 1 && decresc == 0)
    printf("Crescente");
    if(decresc == 1 && cresc == 0)
    printf("Descrescente");
    if(decresc == 1 && cresc == 1)
    printf("Nenhum dos casos");


return 0;
}