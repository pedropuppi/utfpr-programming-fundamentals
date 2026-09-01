#include <stdio.h>
void pontoRolo1();
void pontoRolo2();
void rolaTecido();

#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
void main ()
{
int i,j,limite=0;

while (1)
{
for (i = 0; i < LARGURA_FAIXA; i++)
{
        if(i<limite)
            pontoRolo1 ();
        else
            pontoRolo2 ();
}
 limite++;
rolaTecido ();
if(limite>LARGURA_FAIXA)
    limite = 0;
}
}
void pontoRolo1 (){
/* Faz o ponto vermelho. */
    printf ("v");
}

void pontoRolo2 (){
/* Faz o ponto azul. */
printf ("a");
}

void moveAgulha (){
/* Move a agulha sem marcar pontos (imprime os espaços). */
    printf (" ");
}

void rolaTecido (){
/* Rola o tecido 1cm para baixo (pula 1 linha). */
    printf ("\n");
}