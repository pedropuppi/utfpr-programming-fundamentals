#include <stdio.h>
int main (){
    
    int i,j,k;

    for(k=1;k<=6;k++)
        for(i=k;i<=6;i++){
            for(j=i;j<=6;j++)
                printf("(%d,%d,%d)\n\n",k,i,j);
    }

return 0;
}