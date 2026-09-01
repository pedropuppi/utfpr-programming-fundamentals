#include <stdio.h>
#define MAX 10000
#define MIN 1000
int main (){
    
    int abcd, ab, cd, soma;

    for(abcd=MIN; abcd<MAX; abcd = abcd+1){
    ab = abcd/100;
    cd = abcd%100;  
    soma = ab+cd;

        if(abcd == soma*soma)
        printf("%d\n", abcd);
}
    
return 0;
}