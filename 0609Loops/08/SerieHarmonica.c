#include <stdio.h>
#define MIN_TERMO 0.2
int main (){
    
    float termo=1,num=1,soma = 0;

    while(termo>=MIN_TERMO){
    
        termo = 1/num;
        
        printf("%f ", termo);
        
        soma += termo;
        printf("\n%f ", soma);
        num++;

    }

    

return 0;
}