#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    int N, contador;
    float soma = 0, mult = 1;
    printf("digite um numero positivo: ");scanf("%i", &N);
    if(N <=0)
        printf("Numero invalido");
    for(contador = 1; contador <= N;contador++){
        if(contador % 2 == 0 || contador == 1 || contador == N){
        soma = soma + (PI/contador);
    printf("soma: %.3f\n", soma);
    }if(contador % 2 == 1 || contador == N){
        mult = mult * (contador/PI);
        printf("multiplicacao: %.3f\n", mult);
    }
    }
    printf("\n");
    return 0;
}
