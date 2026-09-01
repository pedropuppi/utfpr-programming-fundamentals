#include <stdio.h>
int proxFibonacci (int n){
    int num1=0,num2=1,num3=0;

    while(num3<n){
        num3 = num1+num2;
        num1 = num2;
        num2 = num3;
    }
    return num3;
    }

int main(){
    int num;

    printf("Digite um numero para encontrar ele ou o proximo numero maior que ele na sequencia de fibonacci: ");
    scanf("%d", &num);

    printf("%d",proxFibonacci(num));

return 0;
}