#include <stdio.h>
int main (){
    
    int valor,um,dois,cinco,dez,vinte,cinquenta,cem;

    printf("Digite um valor em reais: ");
    scanf("%d", &valor);

    cem = valor/100;
    cinquenta = (valor % 100)/50;
    vinte = ((valor % 100) % 50)/20;
    dez = (((valor % 100) % 50) % 20)/10;
    cinco = ((((valor % 100) %50) % 20) %10)/5;
    dois = (((((valor % 100) %50) % 20) %10) %5)/2;
    um = (((((valor % 100) %50) % 20) %10) %5) % 2;

    printf("%d cedula(s) de 100, %d cedula(s) de 50, %d cedula(s) de 20, %d cedula(s) de 10, %d cedula(s) de 5, %d cedula(s) de 2, %d cedula(s) de 1", cem,cinquenta,vinte,dez,cinco,dois,um);

return 0;
}