#include <stdio.h>
#define MAX 6
int main (){
        float maior_nota, menor_nota, nota, soma;
        int i;

    printf("Digite as seis notas:\n");
    
    soma = 0;
    menor_nota = 10;
    maior_nota = 0;

    for(i=0;i<MAX;i++){
        scanf("%f", &nota);
        
        if(nota<menor_nota)
            menor_nota = nota;
        if(nota>maior_nota)
            maior_nota = nota;

        soma = soma + nota;
}

    printf("%.2f", (soma-(maior_nota+menor_nota))/4);

return 0;
}