#include <stdio.h>
#include <stdlib.h>
#define dolar 5.40
#define euro 6.31

int main()
{
    float R;
    printf("CONVERSAO DE DINHEIRO\n");
    printf("1 Dolar = 5,40 R$\n");
    printf("1 Euro = 6,31 R$\n");
    printf("de um valor em reais: ");
    scanf("%f", &R);
    printf("Para Dolar: %.2f / %.2f = %.2f\n", R, dolar, R/dolar);
    printf("Para Euro: %.2f / %.2f = %.2f\n", R, euro, R/euro);
    return 0;
}
