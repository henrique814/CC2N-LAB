#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador = 0, N;
    float maiorPAR = -INFINITY, maiorIMPAR = -INFINITY, menorPAR = INFINITY, menorIMPAR = INFINITY;
    while(contador < 300){
    printf("escreva um numero positivo:");scanf("%i", &N);
    if(N < 0){
        printf("numero invalido\n");
        }
        else if(N % 2 == 0){
            if(N > maiorPAR){
                maiorPAR = N;
            }
            if(N < menorPAR){
                menorPAR = N;
            }
            printf("Maior par = %.0f\n", maiorPAR);
            printf("Menor par = %.0f\n", menorPAR);
            printf("Maior impar = %.0f\n", maiorIMPAR);
            printf("Menor impar = %.0f\n", menorIMPAR);
        }
        else if(N % 2 != 0){
            if(N > maiorIMPAR){
                maiorIMPAR = N;
            }
            if(N < menorIMPAR){
                menorIMPAR = N;
            }
            printf("Maior par = %.0f\n", maiorPAR);
            printf("Menor par = %.0f\n", menorPAR);
            printf("Maior impar = %.0f\n", maiorIMPAR);
            printf("Menor impar = %.0f\n", menorIMPAR);
        }
        contador++;
    }
    return 0;
}
