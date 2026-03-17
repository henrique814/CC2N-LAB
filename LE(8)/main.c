#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, total = 0, a = 0, b = 0, c = 0;
    printf("preferencia em sucos\n");
    while(opcao != 0){
        printf("\nMENU:\n\n");
        printf("1: MIX 1\n");
        printf("2: MIX 2\n");
        printf("3: MIX 3\n");
        printf("0: SAIR\n");
        printf("Sua escolha:");scanf("%i", &opcao);
        if(opcao == 1){
                total++;
                a++;
        printf("porcentagem das preferencias\n");
        printf("MIX 1: %.1f%%\n", (a * 1.0 / total) * 100);
        printf("MIX 2: %.1f%%\n", (b * 1.0 / total) * 100);
        printf("MIX 3: %.1f%%\n", (c * 1.0 / total) * 100);
        }
        else if(opcao == 2){
                total++;
                b++;
        printf("porcentagem das preferencias\n");
        printf("MIX 1: %.1f%%\n", (a * 1.0 / total) * 100);
        printf("MIX 2: %.1f%%\n", (b * 1.0 / total) * 100);
        printf("MIX 3: %.1f%%\n", (c * 1.0 / total) * 100);
        }
        else if(opcao == 3){
                total++;
                c++;
        printf("porcentagem das preferencias\n");
        printf("MIX 1: %.1f%%\n", (a * 1.0 / total) * 100);
        printf("MIX 2: %.1f%%\n", (b * 1.0 / total) * 100);
        printf("MIX 3: %.1f%%\n", (c * 1.0 / total) * 100);
        }
        else if(opcao < 0|| opcao > 3)
            printf("opcao nao existe");
    }
    return 0;
}
