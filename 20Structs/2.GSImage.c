// Aula de structs mas boa pra revisar todo o conteudo ate agr, principalmente alocacao dinamica e ponteiros
// Marcacoes podem n ter haver com o programa mas sim pra ajudar a revisar uns pontos importantes

#include <stdio.h>

typedef struct{

int largura;
int altura;
unsigned char** dados;

} GSImage;

void destroiGSImage (GSImage* img);
GSImage* criaGSImage (int largura, int altura);
GSImage* reduzPelaMetade (GSImage* img);

GSImage* criaGSImage (int largura, int altura){

    GSImage *img;

    img->largura = largura;
    img->altura = altura;

    // alocacao dinamica de vetor
    img = (GSImage*) malloc (sizeof (GSImage));

    // alocacao dinamica de matriz
    img->dados = (unsigned char**) malloc (sizeof (unsigned char*) * altura);
    for(int i = 0; i < altura; i++)
        img->dados[i] = (unsigned char*) malloc (sizeof(unsigned char)*largura);

    return img;
}

GSImage* reduzPelaMetade (GSImage* img){

    int i, j;
    GSImage* reduzida;

    if (img->altura % 2 || img->largura % 2) // verifica se as dimensoes sao divisiveis por 2
        return (NULL);

    reduzida = criaGSImage (img->largura/2, img->altura/2); // cria uma matriz com tamanho reduzido

    for (i = 0; i < reduzida->altura; i++)
        for (j = 0; j < reduzida->largura; j++)
            reduzida->dados [i][j] = (img->dados [i*2][j*2] + img->dados [i*2][j*2+1] + img->dados [i*2+1][j*2] + img->dados [i*2+1][j*2+1])/4;

    return (reduzida);
}

void destroiGSImage (GSImage* img){

    // libera memoria alocada de matriz
    for (int i=0; i <(*img).altura; i++)
        free ((*img).dados[i]);
    free ((*img).dados);

    // libera memoria alocada de vetor
    free (img);
}

