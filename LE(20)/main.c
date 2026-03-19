#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, clienteVIP = 0, clienteST = 0, total = 0;
    float salario;
    printf("classificacao de clientes\n");
    do{
            printf("MENU\n");
    printf("1: Cadastrar cliente\n");
    printf("0: Sair do programa\n");
    printf("Sua escolha: ");scanf("%i", &opcao);
    if(opcao < 0 || opcao > 1)
        printf("opcao invalida\n");
    else if(opcao == 1){
        printf("Salario do cliente:");scanf("%f", &salario);
        if(salario <= 0){
            printf("salario invalido.\n");
        }
        else if (salario >= 5000){
            clienteVIP++;
            total++;
        }
        else if (salario < 5000){
            clienteST++;
            total++;
        }
        printf("porcentagem de clientes VIP: %.1f%%\n", (clienteVIP * 1.0 / total) * 100);
        printf("porcentagem de clientes STANDARD: %.1f%%\n", (clienteST * 1.0 / total) * 100);
    }
    }while(opcao != 0);
    printf("saindo.\n");
    return 0;
}
