#include <stdio.h>

int main(){
    printf("\n\n"); //quebra de linha inicial

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
        //variaveis do menu de navegacao
            int escolhaMenuRaiz, escolhaMenuUm, escolhaMenuDoisUm, escolhaMenuDoisDois;
        //variaveis da logica de comparacao de dois atributos
            int comparaPopulacao, comparaArea, comparaPib, comparaPonto, comparaDensidade, comparaCapita, comparaSuper;
            int pontosCarta1 = 0, pontosCarta2 = 0;

    //cadastro das cartas a serem usadas
        //entrada dos dados da carta 1
            printf("Insira os dados da primeira carta \n");
            printf("Digite a sigla do estado: \n");
            scanf(" %s", estado1);
            printf("Digite o código da carta: \n");
            scanf(" %s", codigo1);
            printf("Digite o nome da cidade: \n");
            scanf(" %49[^\n]", cidade1);
            printf("Digite o número da população: \n");
            scanf(" %d", &populacao1);
            printf("Digite a área (em km²): \n");
            scanf(" %f", &area1);
            printf("Digite o PIB: \n");
            scanf(" %f", &pib1);
            printf("Digite o número de pontos turísticos: \n");
            scanf(" %d", &pontoTur1);
        //entrada dos dados da carta 2
            printf("Insira os dados da segunda carta \n");
            printf("Digite a sigla do estado: \n");
            scanf(" %s", estado2);
            printf("Digite o código da carta: \n");
            scanf(" %s", codigo2);
            printf("Digite o nome da cidade: \n");
            scanf(" %49[^\n]", cidade2);
            printf("Digite o número da população: \n");
            scanf(" %d", &populacao2);
            printf("Digite a área (em km²): \n");
            scanf(" %f", &area2);
            printf("Digite o PIB: \n");
            scanf(" %f", &pib2);
            printf("Digite o número de pontos turísticos: \n");
            scanf(" %d", &pontoTur2);

    //calculo das variaveis compostas das cartas
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
        
    //menu escolha de modo de jogo (1 ou 2 comparacoes)
        printf("\n\n"); //quebra de linha
        printf("Escolha quantos atributos você quer comparar entre as cartas:\n");
        printf("1. Comparar um único atributo\n");
        printf("2. Comparar dois atributos\n");
        printf("3. Finalizar o jogo");
            switch (escolhaMenuRaiz){
                case 1: //comparacao de 1 atributo
                    printf("Escolha o atributo para comparação:\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Demográfica\n");
                    printf("6. PIB per Capita\n");
                    printf("7. Super Poder\n");
                    printf("Escolha: ");
                    scanf("%d", &escolhaMenuUm);
                    switch (escolhaMenuUm){
                        case 1: //compara populacao
                            printf("A cidade de %s possui %lu habitantes.\n", cidade1, populacao1);
                            printf("A cidade de %s possui %lu habitantes.\n", cidade2, populacao2);
                            if(populacao1 > populacao2){
                                printf("A cidade de %s vence com maior número de habitantes.\n", cidade1);
                            }else if(populacao1 < populacao2){
                                printf("A cidade de %s vence com maior número de habitantes.\n", cidade2);
                            }else{
                                printf("Empate: as duas cidades têm populações iguais.\n");
                            }
                            break;

                        case 2: //compara area
                            printf("A cidade de %s possui %.2f km².\n", cidade1, area1);
                            printf("A cidade de %s possui %.2f km².\n", cidade2, area2);
                            if(area1 > area2){
                                printf("A cidade de %s vence com maior área.\n", cidade1);
                            }else if(area1 < area2){
                                printf("A cidade de %s vence com maior área.\n", cidade2);
                            }else{
                                printf("Empate: as duas cidades têm áreas iguais.\n");
                            }
                            break;

                        case 3: //compara pib
                            printf("A cidade de %s possui PIB de R$%.2f bilhões.\n", cidade1, pib1);
                            printf("A cidade de %s possui PIB de R$%.2f bilhões.\n", cidade2, pib2);
                            if(pib1 > pib2){
                                printf("A cidade de %s vence com maior PIB.\n", cidade1);
                            }else if(pib1 < pib2){
                                printf("A cidade de %s vence com maior PIB.\n", cidade2);
                            }else{
                                printf("Empate: as duas cidades têm PIB iguais.\n");
                            }
                            break;

                        case 4: //compara pontos turisticos
                            printf("A cidade de %s possui %d pontos turísticos.\n", cidade1, pontoTur1);
                            printf("A cidade de %s possui %d pontos turísticos.\n", cidade2, pontoTur2);
                            if(pontoTur1 > pontoTur2){
                                printf("A cidade de %s vence com mais pontos turísticos\n", cidade1);
                            }else if(pontoTur1 < pontoTur2){
                                printf("A cidade de %s vence com mais pontos turísticos\n", cidade2);
                            }else{
                                printf("Empate: as duas cidades têm a mesma quantidade de pontos turísticos.\n");
                            }
                            break;

                        case 5: //compara densidade demografica
                            printf("A cidade de %s possui %.2f hab/km².", cidade1, densidadePop1);
                            printf("A cidade de %s possui %.2f hab/km².", cidade2, densidadePop2);
                            if(densidadePop1 < densidadePop2){
                                printf("A cidade %s vence com menor densidade demográfica.\n", cidade1);
                            }else if(densidadePop1 > densidadePop2){
                                printf("A cidade %s vence com menor densidade demográfica.\n", cidade2);
                            }else{
                                printf("Empate: as duas cidades têm a mesma densidade populacional.\n");
                            }
                            break;

                        case 6: //pib capita
                            printf("A cidade de %s possui %.2f PIB per Capita.\n", cidade1, pibCapita1);
                            printf("A cidade de %s possui %.2f PIB per Capita.\n", cidade2, pibCapita2);
                            if(pibCapita1 > pibCapita2){
                                printf("A cidade de %s vence com maior PIB per capita.", cidade1);
                            }else if(pibCapita1 < pibCapita2){
                                printf("A cidade de %s vence com maior PIB per capita.", cidade2);
                            }else{
                                printf("Empate: as duas cidades têm PIB per Capita iguais.\n");
                            }
                            break;

                        case 7: //super poder
                            printf("A cidade de %s possui Super Poder de %.2f.\n", cidade1, superPoder1);
                            printf("A cidade de %s possui Super Poder de %.2f.\n", cidade2, superPoder2);
                            if(superPoder1 > superPoder2){
                                printf("A cidade de %s vence com maior 'Super Poder'.\n", cidade1);
                            }else if(superPoder1 < superPoder2){
                                printf("A cidade de %s vence com maior 'Super Poder'.\n", cidade2);
                            }else{
                                printf("Empate: as duas cidades têm 'Super Poder' iguais.\n");
                            }
                            break;

                        default: //opcao invalida
                            printf("Opção escolhida inválida.\n");
                            break;
                    }
                break;

                case 2: //comparacao de 2 atributos
                    printf("Escolha o primeiro atributo para comparação:\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Demográfica\n");
                    printf("6. PIB per Capita\n");
                    printf("7. Super Poder\n");
                    printf("Escolha: ");
                    scanf("%d", &escolhaMenuDoisUm);
                    
                    printf("Escolha o segundo atributo para comparação (diferente do primeiro):\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Demográfica\n");
                    printf("6. PIB per Capita\n");
                    printf("7. Super Poder\n");
                    printf("Escolha: ");
                    scanf("%d", &escolhaMenuDoisDois);
                    
                //verifica se atributos escolhidos sao iguais
                    if(escolhaMenuDoisDois == escolhaMenuDoisUm){
                        printf("O segundo atributo não pode ser igual ao primeiro. Tente novamente.\n");
                    }

                //comparacao do primeiro atributo
                    if(escolhaMenuDoisUm == 1){ //populacao maior ganha
                        pontosCarta1 += (populacao1 > populacao2) ? 1 : 0;
                        pontosCarta2 += (populacao1 < populacao2) ? 1 : 0;
                    }else if(escolhaMenuDoisUm == 2){ //area maior ganha
                        pontosCarta1 += (area1 > area2) ? 1 : 0;
                        pontosCarta2 += (area1 < area2) ? 1 : 0;
                    }else if (escolhaMenuDoisUm == 3){ //pib maior ganha
                        pontosCarta1 += (pib1 > pib2) ? 1 : 0;
                        pontosCarta2 += (pib1 < pib2) ? 1 : 0;
                    }else if(escolhaMenuDoisUm == 4){ //ponto turistico maior ganha
                        pontosCarta1 += (pontoTur1 > pontoTur2) ? 1 : 0;
                        pontosCarta2 += (pontoTur1 < pontoTur2) ? 1 : 0;
                    } else if (escolhaMenuDoisUm == 5){ //densidade menor ganha
                        pontosCarta1 += (densidadePop1 < densidadePop2) ? 1 : 0;
                        pontosCarta2 += (densidadePop1 > densidadePop2) ? 1 : 0;
                    }else if(escolhaMenuDoisUm == 6){ //pib capita maior ganha
                        pontosCarta1 += (pibCapita1 > pibCapita2) ? 1 : 0;
                        pontosCarta2 += (pibCapita1 < pibCapita2) ? 1 : 0;
                    }else if(escolhaMenuDoisUm == 7){ //super poder maior ganha
                        pontosCarta1 += (superPoder1 > superPoder2) ? 1 : 0;
                        pontosCarta2 += (superPoder1 < superPoder2) ? 1 : 0;
                    }

                //comparacao do segundo atributo
                    if(escolhaMenuDoisDois == 1){ //populacao maior ganha
                        pontosCarta1 += (populacao1 > populacao2) ? 1 : 0;
                        pontosCarta2 += (populacao1 < populacao2) ? 1 : 0;
                    }else if(escolhaMenuDoisDois == 2){ //area maior ganha
                        pontosCarta1 += (area1 > area2) ? 1 : 0;
                        pontosCarta2 += (area1 < area2) ? 1 : 0;
                    }else if (escolhaMenuDoisDois == 3){ //pib maior ganha
                        pontosCarta1 += (pib1 > pib2) ? 1 : 0;
                        pontosCarta2 += (pib1 < pib2) ? 1 : 0;
                    }else if(escolhaMenuDoisDois == 4){ //ponto turistico maior ganha
                        pontosCarta1 += (pontoTur1 > pontoTur2) ? 1 : 0;
                        pontosCarta2 += (pontoTur1 < pontoTur2) ? 1 : 0;
                    } else if (escolhaMenuDoisDois == 5){ //densidade menor ganha
                        pontosCarta1 += (densidadePop1 < densidadePop2) ? 1 : 0;
                        pontosCarta2 += (densidadePop1 > densidadePop2) ? 1 : 0;
                    }else if(escolhaMenuDoisDois == 6){ //pib capita maior ganha
                        pontosCarta1 += (pibCapita1 > pibCapita2) ? 1 : 0;
                        pontosCarta2 += (pibCapita1 < pibCapita2) ? 1 : 0;
                    }else if(escolhaMenuDoisDois == 7){ //super poder maior ganha
                        pontosCarta1 += (superPoder1 > superPoder2) ? 1 : 0;
                        pontosCarta2 += (superPoder1 < superPoder2) ? 1 : 0;
                    }
                break;
                
                case 3: //finalizar jogo
                    printf("Obrigado por jogar!\n");
                break;

                default: //opcao invalida
                    printf("Opção escolhida inválida.\n");
                break;
            }

    return 0;
}