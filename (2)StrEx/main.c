#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 100

int main()
{
    int contador = 0;
    char palavra[TAMANHO];
    do{
    printf("digite a palavra %i", contador + 1);scanf("");
    }while(contador < 100);
    return 0;
}
