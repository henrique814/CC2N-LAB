#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X1,Y1,X2,Y2;
    float distancia;
    //entrada
    printf("DISTANCIA ENTRE PONTOS: Dados de entrada\n");
    printf("defina X de P: ");
    scanf("%i", &X1);
    printf("defina Y de P: ");
    scanf("%i", &Y1);
    printf("defina X de Q: ");
    scanf("%i", &X2);
    printf("defina Y de Q: ");
    scanf("%i", &Y2);
    distancia = pow(pow(X2 - X1, 2) + pow(Y2 - Y1, 2), 1.0/2);
    printf("Distancia = %.2f\n", distancia);
    return 0;
}
