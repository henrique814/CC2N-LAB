#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float R, area, volume, volumeLitros;
    printf("CALCULADORA: ESFERA\n");
    printf("Raio = ");
    scanf("%f", &R);
    area = 4 * PI * pow(R,2);
    volume = 4.0 / 3.0 * PI * pow(R,3);
    volumeLitros = 1000 * volume;
    printf("Area: %.2f M^2\n", area);
    printf("Volume: %.2f M^3\n", volume);
    printf("Volume em litros: %.2f L\n", volumeLitros);
}
