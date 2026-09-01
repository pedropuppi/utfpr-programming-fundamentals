#include <stdio.h>
#include <stdlib.h> 
    
int comprimeSequencia (short* in, int n, short* out){

    int inicio = 0, usadas = 0, val, cont=0;

    while (inicio < n){
        
        val = in [inicio];
        
        while (inicio+cont < n && in [inicio+cont] == val)
        cont++;

        if (cont == 1)
            out [usadas] = val;
        else{
            out [usadas] = cont;
            out [usadas+1] = val;
        }

        inicio += cont;
    }

return (usadas);
}