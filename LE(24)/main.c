#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    float preco, reajusteV = 0;
    printf("Preco de produtos com 5%% de reajuste\n");
    while(contador < 50){
        printf("preco da mercadoria %i: R$", contador + 1);scanf("%f", &preco);
        reajusteV = preco * (5/100);
        if(reajusteV <= 25.50){
            printf("produto com desconto de 5%% = %.2f\n", preco - reajusteV);
            printf("produto com acrescimo de 5%% = %.2f\n", preco + reajusteV);
        }
        else if(reajusteV >= 25.50){
            printf("Reajuste muito grande: reajuste reajustado\n");
                reajusteV = reajusteV - (2/100);
            printf("produto com desconto de 5%% = %.2f\n", preco - reajusteV);
            printf("produto com acrescimo de 5%% = %.2f\n", preco + reajusteV);
        }
        contador++;
    }
    return 0;
}
