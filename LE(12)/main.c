#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperatura = 0, media, soma = 0;
    int contador = 0;
    printf("Temperaturas de Vila Velha no verao:\n");
    do{
            printf("temperatura diaria: ");scanf("%f", &temperatura);
    soma = soma + temperatura;
    contador++;
    media = soma / contador;
    printf("Media diaria: %.1f\n", media);
    }while(temperatura >= 28);
    printf("temperatura abaixo do normal.");
    return 0;
}
