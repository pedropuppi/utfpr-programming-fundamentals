#include <stdio.h>
int main ()
{
double preco_gasolina, preco_alcool, km_litrogasolina, km_litroalcool, custo_gasolina, custo_alcool;

    printf("Digite o preco do litro da gasolina: ");
    scanf("%lf", &preco_gasolina);
    printf("Digite o preco do litro do alcool: ");
    scanf("%lf", &preco_alcool);
    printf("Digite quantos km por litro o carro a biocombustivel faz com gasolina: ");
    scanf("%lf", &km_litrogasolina);
    printf("Digite quantos km por litro o carro a biocombustivel faz com alcool: ");
    scanf("%lf", &km_litroalcool);

    custo_gasolina = preco_gasolina/km_litrogasolina;
    custo_alcool = preco_alcool/km_litrogasolina;

    if (custo_alcool >= custo_gasolina)
        printf("Abastecer com gasolina");
    else
        printf("Abastecer com alcool");










return 0;
}