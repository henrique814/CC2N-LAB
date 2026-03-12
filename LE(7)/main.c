#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, soma = 0, N = 1;
    for(contador = 9; contador <= 99; contador++){
        if (contador % 2 != 0 && contador % 3 == 0 && contador % 5 != 0){
            printf("Numero %i = %i\n", N, contador);
            N++;
            soma = soma + contador;
        }
    }
    printf("Soma dos numeros = %i\n", soma);
    return 0;
}
