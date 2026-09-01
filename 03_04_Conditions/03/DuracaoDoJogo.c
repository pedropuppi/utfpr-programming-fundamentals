#include <stdio.h>
int main (){
    
    int hf, hi, tempo;
    
    scanf("%d %d", &hi, &hf);

    tempo = hf - hi;

    if(tempo <= 0)
    printf("o jogo durou %d hora(s)", 24+tempo);
    else
    printf("o jogo durou %d hora(s)", tempo);

return 0;
}