#include <stdio.h>
void pontoRolo1();
void pontoRolo2();
void moveAgulha();
void rolaTecido();

#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */
void main ()
{
int i;
/* Funciona até desligar ou o tecido acabar. */
while (1)
{
for (i = 0; i < LARGURA_FAIXA; i++)
{
if (i == 1)
pontoRolo1 ();
else if (i == LARGURA_FAIXA-2)
pontoRolo2 ();
else
moveAgulha ();
}
rolaTecido ();
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