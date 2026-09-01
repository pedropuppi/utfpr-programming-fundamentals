#include <stdio.h>
int main (){
    
    int ano_atual, ano_nasc, ano_inss, idade, inss;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nasc);
    printf("Digite o ano inicial de contribuicao para o INSS: ");
    scanf("%d", &ano_inss);

    idade = ano_atual - ano_nasc;
    inss = ano_atual - ano_inss;

    if((idade >= 65)||(inss >= 30)||(idade>60 && inss>=25))
    printf("Idade = %d, voce se qualifica para aposentadoria ate o final do ano atual", idade);
    else
    printf("Idade = %d, voce nao se qualifica para a aposentadoria ate o final do ano atual", idade);

return 0;
}