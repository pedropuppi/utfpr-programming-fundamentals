#include <stdio.h>
int main (){
    int ddp,mmp,aaaap,ddq,mmq,aaaaq; // p - data de nascimento, q - data atual

    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &ddp,&mmp,&aaaap);
    printf("Digite a data atual (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &ddq,&mmq,&aaaaq);

    if(mmq < mmp || (mmq == mmp && ddq < ddp))
        printf("Idade = %d", (aaaaq-aaaap)-1);
      
    else
        printf("Idade = %d", aaaaq-aaaap);
    
return 0;
}