#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int N1,N2;
    printf("MINI CALCULADORA DE INTEIROS: N1 e N2\n");
    printf("VALOR DE N1: ");
    scanf("%i", &N1);
    printf("VALOR DE N2: ");
    scanf("%i", &N2);
    printf("ADI��O: N1 + N2 = %i + %i = %i\n" , N1, N2, N1 + N2);
    printf("SUBTRA��O: N1 - N2 = %i - %i = %i\n" , N1, N2, N1 - N2);
    printf("MULTIPLICA��O: N1 * N2 = %i * %i = %i\n" , N1, N2, N1 * N2);
    printf("DIVIS�O: N1 / N2 = %i / %i = %.1f\n" , N1, N2, 1.0 * N1 / N2);
    printf("DIVIS�O: N1 / N2 = %i / %i = %.1f\n" , N1, N2, (float) N1 / N2);
    printf("QUOCIENTE: N1 div N2 = %i / %i = %.i\n" , N1, N2, N1 / N2);
    printf("RESTO: N1 mod N2 = %i %% %i = %i\n" , N1, N2, N1 % N2);
    printf("POTENCIA��O: N1 elevado a N2 = %i elevado a %i = %.1f\n" , N1, N2, pow(N1,N2));
    printf("RADICIA��O: N1 raiz N2 = %i raiz %i = %.1f\n" , N1, N2, pow(N1,1.0/N2));
    return 0
}
