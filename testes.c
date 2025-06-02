#include <stdio.h>

int main(){
    //banco de variáveis
        //carta 1
        char estado1[5], codigo1[5], cidade1[50];
        int pontoTur1;
        unsigned long int populacao1;
        float area1, pib1, densidadePop1, pibConversao1, pibCapita1, superPoder1;

        //carta 2
        char estado2[5], codigo2[5], cidade2[50];
        int pontoTur2;
        unsigned long int populacao2;
        float area2, pib2, densidadePop2, pibConversao2, pibCapita2, superPoder2;

        //comparativos
        int compPopulacao = 0;
        int compArea = 0;


    //leitura dos dados das cartas
        //carta 1
        printf("Insira os dados da primeira carta \n");
        printf("Digite a sigla do estado: \n");
        scanf(" %s", estado1);
        printf("Digite o nome da cidade: \n");
        scanf(" %s", cidade1);
        printf("Digite o número da população: \n");
        scanf(" %lu", &populacao1);
        printf("Digite a área (em km²): \n");
        scanf(" %f", &area1);


        //carta 2
        printf("Insira os dados da segunda carta \n");
        printf("Digite a sigla do estado: \n");
        scanf(" %s", estado2);
        printf("Digite o nome da cidade: \n");
        scanf(" %s", cidade2);
        printf("Digite o número da população: \n");
        scanf(" %lu", &populacao2);
        printf("Digite a área (em km²): \n");
        scanf(" %f", &area2);


    //lógica e comparação entre cartas
        //população
        printf("\nComparação entre cartas (Atributo: População)\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
        if(populacao1 > populacao2){
            printf("A cidade %s tem maior população\n", cidade1);
            compPopulacao = 1;
        }else{
            printf("A cidade %s tem maior população\n", cidade2);
        }
 
        printf("\nComparação entre cartas (Atributo: População)\n");
        printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %f\n", cidade2, estado2, area2);
        if(area1 > area2){
            printf("A cidade %s tem maior área\n", cidade1);
            compArea = 1;
        }else{
            printf("A cidade %s tem maior área\n", cidade2);
        }


    //exibição do resultado das comparações
        //resultado população
        if(compPopulacao == 1){
            printf("\nA cidade vencedora com maior população é: %s\n", cidade1);
        }else{
            printf("\nA cidade vencedora com maior população é: %s\n", cidade2);
        }

        //resultado área
        if(compArea == 1){
            printf("\nA cidade vencedora com maior área é: %s\n", cidade1);
        }else{
            printf("\nA cidade vencedora com maior área é: %s\n", cidade2);
        }

    return 0;
}