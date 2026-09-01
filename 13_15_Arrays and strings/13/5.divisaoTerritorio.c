#include <stdio.h>
#define N 100
int main(){

    int terrenos, territorio[N], soma=0, soma2=0,j,i;

    scanf("%d", &terrenos);

    for(i=0;i<terrenos;i++){
        scanf("%d", &territorio[i]);
        soma+=territorio[i];
    }
        
    for(j=0; soma2 != soma/2; j++){
        soma2+=territorio[j];
    }
    
    printf("%d",j);

return 0;
}
