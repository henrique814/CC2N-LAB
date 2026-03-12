#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somaPar = 0, somaImpar = 0, contador;
    for(contador  = 999;contador >= 100; contador--){
        if(contador % 2 == 0){
            somaPar = somaPar + contador;
        } else if(contador % 2 == 1){
            somaImpar = somaImpar + contador;
        }
    }
    printf("soma dos pares = %i\n", somaPar);
    printf("soma dos impares = %i\n", somaImpar);
    return 0;
}
