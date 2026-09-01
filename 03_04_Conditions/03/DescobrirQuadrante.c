#include <stdio.h>
int main (){
    int x,y;

    scanf("%d %d", &x,&y);

    if(x>0){
        if(y>0)
        printf("Q1");
        else if(y<0)
        printf("Q4");
        else
        printf("Eixo x");
    }
    else if(x<0){
        if(y>0)
        printf("Q2");
        else if(y<0)
        printf("Q3");
        else
        printf("Eixo x");
    }
    else{
        if(y==0)
        printf("Origem");
        else
        printf("Eixo y");
    }

return 0;
}