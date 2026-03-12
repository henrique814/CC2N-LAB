#include <stdio.h>
#include <stdlib.h>
#define SM 880.05
int main()
{
    float salario = 0;
    int contador = 0;
    int a = 0, b = 0, c = 0, total = 0;
    printf("Salario de clientes:\n ");
    while (contador < 1000){
        printf("Salario do cliente %i:", contador + 1);scanf("%f", &salario);
        if(salario >= 15 * SM){
            a++;
            total++;
        }else if(salario < 15 * SM && salario >= 5 * SM){
            b++;
            total++;
        }else if(salario < 5 * SM){
            c++;
            total++;
        }
        printf("Percentual de clientes classe A: %.1f%%\n", (a * 1.0 / total) * 100);
        printf("Percentual de clientes classe B: %.1f%%\n", (b * 1.0 / total) * 100);
        printf("Percentual de clientes classe C: %.1f%%\n", (c * 1.0 / total) * 100);
        contador++;
    }
    return 0;
}
