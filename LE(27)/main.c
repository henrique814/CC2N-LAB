#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N, somaP = 0, totalP = 0, mediaP = 0, somaN = 0, totalN = 0, mediaN = 0;
    printf("media de numeros reais, digite 0 para parar o sistema.\n");
    do{
        printf("\ndigite um numero: ");scanf("%f", &N);
        if(N > 0){
            somaP = somaP + N;
            totalP++;
            mediaP = somaP/totalP;
            printf("Media de numeros positivos: %.1f\n", mediaP);
            printf("Media de numeros negativos: %.1f\n", mediaN);
        }else if(N < 0){
            somaN = somaN + N;
            totalN++;
            mediaN = somaN/totalN;
            printf("Media de numeros positivos: %.1f\n", mediaP);
            printf("Media de numeros negativos: %.1f\n", mediaN);
        }
    }while(N != 0);
    return 0;
}
