#include <stdio.h>
int main (){
    
    int num,i;

    for(num=1;num<11;num++){
        for(i=0;i<10;i++)
            printf("%d x %d = %d\n", num, i+1, num * (i+1));
        printf("\n");
    }

return 0;
}