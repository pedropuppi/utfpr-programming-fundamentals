#include <stdio.h>
void pontoRolo1();
void pontoRolo2();
void rolaTecido();

#define LARGURA_FAIXA 6 // Largura da faixa de tecido
void main (){
    int i,j,k;

    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++){
            for (j = i; j >= 0; j--)
                    pontoRolo1();
            rolaTecido ();
        }
        for (i = 0; i < LARGURA_FAIXA; i++){
                for (k = i; k >= 0; k--)
                    pontoRolo2();
            rolaTecido ();
    }   
    }
}

//=======================================================================================

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