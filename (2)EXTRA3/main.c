/*
        🧠 Lógicas de Programação contidas neste exemplo:
        *  Declaração da String: Vetor de Caracteres
        *  Leitura / Exibição na Tela String: scanf
        *  Medir Tamanho uma string: função strlen
        *  Lógica de programação: ????

*/
#include <stdio.h>
#include <string.h>
#define TAMANHO 3000
int main(void) {
    char texto[TAMANHO] = {"50 Anos da Universidade Vila Velha - UVV: Uma Trajetória de Excelência e Inovação\n\n\t A UVV completa 50 anos de história, consolidando-se como uma das instituições de ensino superior mais respeitadas do Espírito Santo e do Brasil.\n Desde sua fundação, a UVV tem sido símbolo de transformação, inovação e compromisso com o conhecimento. \nO nascimento da UVV marcou um novo tempo para a educação capixaba, oferecendo oportunidades de formação de qualidade e contribuindo para o desenvolvimento regional.\n\n\t Nos primeiros anos, a UVV enfrentou desafios comuns a qualquer instituição nascente, mas sua visão ousada e seu corpo docente comprometido fizeram da UVV um polo de referência em ensino, pesquisa e extensão.\n A UVV cresceu, expandiu cursos, criou laboratórios modernos e consolidou parcerias nacionais e internacionais.\n A cada década, a UVV reafirmou seu propósito de formar cidadãos críticos e profissionais éticos.\n Hoje, a UVV é reconhecida por sua infraestrutura exemplar e por programas inovadores que unem teoria e prática.\n A UVV também se destaca por incentivar a iniciação científica e por valorizar o impacto social de seus projetos.\n\n\t Em meio século, a UVV tornou-se um espaço de transformação de vidas, inovação tecnológica e responsabilidade social.\nAs comemorações dos 50 anos da UVV refletem o orgulho de toda a comunidade acadêmica.\n A UVV celebra sua trajetória com eventos culturais, científicos e institucionais que resgatam sua memória e projetam seu futuro. Cada conquista da UVV é fruto da dedicação de seus professores, alunos e colaboradores.\nA UVV olha para o passado com gratidão e para o futuro com esperança.\n\t A UVV é hoje sinônimo de qualidade, inovação e pertencimento.\n Ao longo de cinco décadas, a UVV construiu um legado de credibilidade e excelência.\n Os 50 anos da UVV representam o reconhecimento de uma história que inspirou gerações e continuará a inspirar muitas outras.\n Com orgulho e emoção, a UVV reafirma seu compromisso de continuar crescendo, evoluindo e transformando o conhecimento em futuro.\n\n\t Parabéns, UVV, pelos 50 anos de conquistas e pela dedicação em formar um mundo melhor."};
    unsigned T, maior = 0;
    T =strlen(texto);
    printf("\n\n\t%s (Tamanho: %u caracteres)\n", texto, T);
    int i, opcao, j;
    char maiorPalavra[TAMANHO/10], aux[TAMANHO/10];

    printf("\nMENU:\n");
    do{
        printf("0: sair.\n");
        printf("1: Exibir a maior palavra.\n");
        printf("Sua Escolha: "); scanf("%i", &opcao);
        if(opcao < 0 || opcao > 2){
            printf("Opcao Invalida.\n");
        }else if(opcao == 0){
        printf("Saindo.\n");
        }else if(opcao == 1){
            for(i = 0; i< TAMANHO / 10; i++){
                maiorPalavra[i] = ' ';
                aux[i] = ' ';
            }
            maior = 0;
            j = 0;
            i = 0;
            while(texto[i] != '\0'){
                if(texto[j] != ' '){
                    aux[j] = texto[i];
                    j++;
                    if(maior < j){
                        maior = j + 1;
                        strcpy(maiorPalavra, aux);
                    }
                }else{
                    j = 0;
                }
                i++;
            }
            printf("Maior palavra: %s\n", maiorPalavra);
            printf("Tamanho da palavra: %u\n", maior);
        }
    }while(opcao != 0);
     return 0;
}
