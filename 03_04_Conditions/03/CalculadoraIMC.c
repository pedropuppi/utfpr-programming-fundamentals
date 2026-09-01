#include <stdio.h>
int main (){
    float peso, altura, imc;

    printf("Digite o peso: "); 
    scanf("%f", &peso);
    
    
  printf("Digite a altura: ");
  scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("imc = %.2f\n", imc);

    if(imc<18.5)
    printf("Magreza (Abaixo do peso)");
    else if(imc<25.0)
    printf("Normal (Peso ideal/saudavel)");
    else if(imc<30.0)
    printf("Sobrepeso (Acima do peso)");
    else if(imc<35)
    printf("Obesidade Grau I");
    else if(imc<40)
    printf("Obesidade Grau II (Severa)");
    else
    printf("Obesidade Grau III (Morbida/Grave)");


return 0;
}