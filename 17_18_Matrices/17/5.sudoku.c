#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,k,l;
    int resposta_sudoku [9][9] = {{9, 5, 4, 8, 1, 6, 3, 7, 2},
                                  {7, 8, 6, 2, 5, 3, 1, 4, 9},
                                  {1, 2, 3, 7, 9, 4, 6, 5, 8},
                                  {3, 1, 8, 9, 7, 2, 4, 6, 5},
                                  {2, 7, 9, 4, 6, 5, 8, 1, 3},
                                  {4, 6, 5, 3, 8, 1, 9, 2, 7},
                                  {8, 4, 7, 1, 2, 9, 5, 3, 6},
                                  {5, 3, 2, 6, 4, 8, 7, 9, 1},
                                  {6, 9, 1, 5, 3, 7, 2, 8, 4}};

    // verifica cada coluna                          
    for(j=0;j<9;j++){ 
        int verificados[9] = {0};
        for(i=0;i<9;i++){
            
            if(verificados[resposta_sudoku[i][j]-1] == 0)
                verificados[resposta_sudoku[i][j]-1] = 1;
            else{
                printf("Nao eh uma solucao valida");
                return 0;
            }
        }
    }
  

    // verifica cada linha
    for(i=0;i<9;i++){ 
        int verificados[9] = {0};
        for(j=0;j<9;j++){
            
            if(verificados[resposta_sudoku[i][j]-1] == 0)
                verificados[resposta_sudoku[i][j]-1] = 1;
            else{
                printf("Nao eh uma solucao valida");
                return 0;
            }
        }
    }

    // verifica cada quadrado
    for(k=0;k<9;k+=3){
        for(l=0;l<9;l+=3){

            int verificados[9] = {0};

            for(i=k;i<3+k;i++){ 
                for(j=l;j<l+3;j++){
                    
                    if(verificados[resposta_sudoku[i][j]-1] == 0)
                        verificados[resposta_sudoku[i][j]-1] = 1;
                    else{
                        printf("Nao eh uma solucao valida");
                        return 0;
                    }
                }

            }
        }
    }

    printf("Eh uma solucao valida");
            
    return 0;
}