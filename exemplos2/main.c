#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, reajuste;
    float totalBruto, totalLiquido, desconto;
    int quantidade;
    //entrada
    printf("NERCADORIA\n");
    printf("Preco (R$): "); scanf("%f", &preco);
    printf("Quantidade (Unidade): "); scanf("%i", &quantidade);
    printf("Reajuste (%%): "); scanf("%f", &reajuste);
    // processamento
    totalBruto = preco * quantidade;
    desconto = reajuste / 100 * totalBruto;
    totalLiquido = totalBruto - desconto;
    //saida
    printf("Total (sem desconto): R$ %.2f\n", totalBruto);
    printf("Total (%.2f %% off): R$ %.2f\n", reajuste, totalLiquido);
    printf("Desconto (%.2f %%): R$ %.2f\n", reajuste, desconto);
    return 0;
}
