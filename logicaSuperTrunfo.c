#include <stdio.h>

int main(){
    //banco de variáveis
        //variáveis da carta 1
        char estado1[5], codigo1[5], cidade1[50];
        int pontoTur1;
        unsigned long int populacao1;
        float area1, pib1, densidadePop1, pibConversao1, pibCapita1, superPoder1;

        //variáveis da carta 2
        char estado2[5], codigo2[5], cidade2[50];
        int pontoTur2;
        unsigned long int populacao2;
        float area2, pib2, densidadePop2, pibConversao2, pibCapita2, superPoder2;

        //comparativos (cidades vencedoras)
        int compPopulacao = 0;
        int compArea = 0;
        int compPib = 0;
        int compPontoTur = 0;
        int compDensidade = 0;
        int compPibCapita = 0;
        int compSuperPoder = 0;

        //cálculo de variáveis da carta 1
        densidadePop1 = (float)((float)populacao1 / area1);
        pibConversao1 = (pib1 * 1000000000);
        pibCapita1 = (float)(pibConversao1 / populacao1);
        superPoder1 = populacao1 + pib1 + pontoTur1 + pibCapita1 + (-densidadePop1);

        //cálculo de variáveis da carta 2
        densidadePop2 = (float)((float)populacao2 / area2);
        pibConversao2 = (pib2 * 1000000000);
        pibCapita2 = (float)(pibConversao2 / populacao2);
        superPoder2 = populacao2 + pib2 + pontoTur2 + pibCapita2 + (-densidadePop2);        


    //leitura dos dados das cartas
        //carta 1
        printf("Insira os dados da primeira carta \n");
        printf("Digite a sigla do estado: \n");
        scanf(" %s", estado1);
        //printf("Digite o código da carta: \n");
        //scanf(" %s", codigo1);
        printf("Digite o nome da cidade: \n");
        scanf(" %s", cidade1);
        printf("Digite o número da população: \n");
        scanf(" %d", &populacao1);
        printf("Digite a área (em km²): \n");
        scanf(" %f", &area1);
        printf("Digite o PIB: \n");
        scanf(" %f", &pib1);
        //printf("Digite o número de pontos turísticos: \n");
        //scanf(" %d", &pontoTur1);

        //carta 2
        printf("Insira os dados da segunda carta \n");
        printf("Digite a sigla do estado: \n");
        scanf(" %s", estado2);
        //printf("Digite o código da carta: \n");
        //scanf(" %s", codigo2);
        printf("Digite o nome da cidade: \n");
        scanf(" %s", cidade2);
        printf("Digite o número da população: \n");
        scanf(" %d", &populacao2);
        printf("Digite a área (em km²): \n");
        scanf(" %f", &area2);
        printf("Digite o PIB: \n");
        scanf(" %f", &pib2);
        //printf("Digite o número de pontos turísticos: \n");
        //scanf(" %d", &pontoTur2);
        
            
    //lógica de comparação entre cartas
        //comparação de população
        printf("\nComparação entre cartas (Atributo: População)\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
        if(populacao1 > populacao2){
            compPopulacao = 1;
        }else{
            compPopulacao = 2;
        }
 
        //comparação de área
        printf("\nComparação entre cartas (Atributo: Área)\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
        if(area1 > area2){
            compArea = 1;
        }else{
            compArea = 2;
        }
        
        //comparação do PIB
        printf("\nComparação entre cartas (Atributo: PIB)\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
        if(pib1 > pib2){
            compPib = 1;
        }else{
            compPib = 2;
        }
        
        //comparação do PIB
        printf("\nComparação entre cartas (Atributo: PIB)\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
        if(pib1 > pib2){
            compPib = 1;
        }else{
            compPib = 2;
        }

    //exibição do resultado das comparações
        /*
        //população
        if(compPopulacao == 1){
            printf("A cidade vencedora com maior população é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com maior população é: %s\n", cidade2);
        }
        //área
        if(compArea == 1){
            printf("A cidade vencedora com maior área é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com maior área é: %s\n", cidade2);
        } 
        //PIB
        if(compPib == 1){
            printf("A cidade vencedora com maior PIB é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com maior PIB é: %s\n", cidade2);
        }
        */

        if(compPopulacao == 1){
            printf("A cidade vencedora com maior população é: %s\n", cidade1);
        }else if(compArea == 1){
            printf("A cidade vencedora com maior área é: %s\n", cidade1);
        }else if(compPib == 1){
            printf("A cidade vencedora com maior PIB é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com maior população é: %s\n", cidade2);
            printf("A cidade vencedora com maior área é: %s\n", cidade2);
            printf("A cidade vencedora com maior PIB é: %s\n", cidade2);
        }


    return 0;
}