#include <stdio.h>

int main(){
    //banco de variaveis
        //variaveis carta 1
        char estado1[5], codigo1[5], cidade1[50];
        int pontoTur1;
        unsigned long int populacao1;
        float area1, pib1, densidadePop1, pibConversao1, pibCapita1, superPoder1;

        //variaveis carta 2
        char estado2[5], codigo2[5], cidade2[50];
        int pontoTur2;
        unsigned long int populacao2;
        float area2, pib2, densidadePop2, pibConversao2, pibCapita2, superPoder2;

        //comparativos
        int compPopulacao = 0;
        int compArea = 0;
        int compPib = 0;
        int compPontoTur = 0;
        int compDensidade = 0;
        int compPibCapita = 0;
        int compSuperPoder = 0;

        //calculo de variaveis da carta 1
        densidadePop1 = (float)((float)populacao1 / area1);
        pibConversao1 = (pib1 * 1000000000);
        pibCapita1 = (float)(pibConversao1 / populacao1);
        superPoder1 = populacao1 + pib1 + pontoTur1 + pibCapita1 + (-densidadePop1);

        //calculo de variaveis da carta 2
        densidadePop2 = (float)((float)populacao2 / area2);
        pibConversao2 = (pib2 * 1000000000);
        pibCapita2 = (float)(pibConversao2 / populacao2);
        superPoder2 = populacao2 + pib2 + pontoTur2 + pibCapita2 + (-densidadePop2);        


    //leitura dos dados das cartas
        //carta 1
        printf("Insira os dados da primeira carta \n");
        //printf("Digite a sigla do estado: \n");
        //scanf(" %s", estado1);
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
        printf("Digite o número de pontos turísticos: \n");
        scanf(" %d", &pontoTur1);

        //carta 2
        printf("Insira os dados da segunda carta \n");
        //printf("Digite a sigla do estado: \n");
        //scanf(" %s", estado2);
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
        printf("Digite o número de pontos turísticos: \n");
        scanf(" %d", &pontoTur2);
        

    //logica de comparacao entre cartas
        printf("\n"); //quebra de linha
        printf("Comparação entre os atributos das cartas:\n");
        //comparacao de populacao
        if(populacao1 > populacao2){
            printf("%s tem maior população.\n", cidade1);
            compPopulacao = 1;
        }else{
            printf("%s tem maior população.\n", cidade2);
            compPopulacao = 2;
        }
 
        //comparacao de area
        if(area1 > area2){
            printf("%s tem maior área.\n", cidade1);
            compArea = 1;
        }else{
            printf("%s tem maior área.\n", cidade2);
            compArea = 2;
        }
        
        //comparacao do pib
        if(pib1 > pib2){
            printf("%s tem maior PIB.\n", cidade1);
            compPib = 1;
        }else{
            printf("%s tem maior PIB.\n", cidade2);
            compPib = 2;
        }

        //comparacao de pontos turisticos
        if(pontoTur1 > pontoTur2){
            printf("%s tem mais pontos turísticos.\n", cidade1);
            compPontoTur = 1;
        }else{
            printf("%s tem mais pontos turísticos.\n", cidade2);
            compPontoTur = 2;
        }

        //comparacao de densidade populacional
        if(densidadePop1 < densidadePop2){
            printf("%s tem menor densidade populacional.\n", cidade1);
            compPontoTur = 1;
        }else{
            printf("%s tem menor densidade populacional.\n", cidade2);
            compPontoTur = 2;
        }


    //exibicao dos resultados das comparacoes
        printf("\n"); //quebra de linha
        //populacao
        if(compPopulacao == 1){
            printf("A cidade vencedora com maior população é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com maior população é: %s\n", cidade2);
        }

        //area
        if(compArea == 1){
            printf("A cidade vencedora com maior área é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com maior área é: %s\n", cidade2);
        } 
        
        //pib
        if(compPib == 1){
            printf("A cidade vencedora com maior PIB é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com maior PIB é: %s\n", cidade2);
        }

        //pontos turisticos
        if(compPontoTur == 1){
            printf("A cidade vencedora com mais pontos turísticos é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com mais pontos turísticos é: %s\n", cidade2);
        }

        //densidade populacional
        if(densidadePop1 == 1){
            printf("A cidade vencedora com menor densidade populacional é: %s\n", cidade1);
        }else{
            printf("A cidade vencedora com menor densidade populacional é: %s\n", cidade2);
        }


    return 0;
}