#include <stdio.h>
unsigned int inverteNum (unsigned int n){
    unsigned int invertido=0;

    while(n>0){     
        invertido = invertido*10 + (n%10); 
        n/= 10;
    }

return invertido;
}
int main(){
    int num;

    printf("Digite um numero para inverter: ");
    scanf("%d",&num);

    printf("%d",inverteNum(num));

return 0;
}