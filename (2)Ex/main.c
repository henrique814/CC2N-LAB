#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int main()
{
    float nota[TAMANHO], soma = 0, media = 0;
    int indice = 0, i, matricula[TAMANHO], opcao, achar = 0, contador = 0, output;
    printf("Cadastrar 50 alunos\n");
    do{
        printf("MENU:\n\n");
        printf("[1]: cadastrar um aluno\n");
        printf("[2]: media do bimestre\n");
        printf("[3]: pesquisar aluno por matricula(seq search)\n");
        printf("[4]: ordenar os alunos por matricula\n");
        printf("[5]: pesquisar aluno por matricula(bin search)\n");
        printf("[0]: sair\n");
        printf("Sua escolha: ");scanf("%i", &opcao); printf("\n");
        if(opcao == 0)
            printf("Saindo\n");
        else if(opcao < 0 || opcao > 5)
            printf("opcao invalida\n");
        else if(opcao == 1){
            if(indice <TAMANHO){
                    do{
            printf("matricula do aluno %i(XXX): ", indice + 1);scanf("%i", &matricula[indice]);
            if(matricula[indice] < 100 || matricula[indice] >=1000)
                printf("ERRO NA MATRICULA\n");
            }while(matricula[indice] < 100 || matricula[indice] >=1000);
            do{
            printf("nota do aluno %i: ", indice + 1);scanf("%f", &nota[indice]);
            if(nota[indice] < 0 || nota[indice] >10)
                printf("ERRO NA NOTA\n");
            }while(nota[indice] < 0 || nota[indice] > 10);
        indice++;
        }else
        printf("ERRO turma cheia");
        }else if(opcao == 2){
            soma = 0;
            for(i = 0;i <= indice;i++){
                soma = soma + nota[i];
            }
            media = soma / indice;
            printf("media do bimestre entre os alunos: %.1f\n", media);
        }else if(opcao == 3){
            output = -1;
            contador = 0;
            printf("digite uma matricula p/ procurar: ");scanf("%i", &achar);
            while(contador < indice){
                if(matricula[contador] == achar){
                        output = contador;
                break;
                    printf("dados do aluno procurado:\n");
                    printf("matricula: %i\n", matricula[output]);
                    printf("nota: %.1f\n", nota[output]);

                }else if(output == -1)
                printf("matricula inexistente\n");

                contador++;
            }
        }

    }while(opcao != 0);
    return 0;
}
