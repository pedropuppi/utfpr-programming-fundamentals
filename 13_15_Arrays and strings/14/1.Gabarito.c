#include <stdio.h>

int main(){

    int N, certas=0;

    printf("Quantidade de questoes: ");
    scanf("%d",&N);

    char respostas[N],gabarito[N];

    printf("Digite suas respostas: ");
    scanf("%s", &respostas);

    printf("Digite o gabarito: ");
    scanf("%s", &gabarito);

    for(int i=0;i<N;i++){
        if(respostas[i] == gabarito[i])
            certas++;
    }

    printf("%d", certas);

    return 0;
}
