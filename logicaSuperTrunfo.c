#include <stdio.h>

int main(){
    //variaveis carta 1 - revisado
        char estado1[5], codigo1[5], cidade1[50];
        int pontoTur1;
        unsigned long int populacao1;
        float area1, pib1, densidadePop1, pibConversao1, pibCapita1, superPoder1;

    //variaveis carta 2 - revisado
        char estado2[5], codigo2[5], cidade2[50];
        int pontoTur2;
        unsigned long int populacao2;
        float area2, pib2, densidadePop2, pibConversao2, pibCapita2, superPoder2;

    //variaveis do menu de navegacao - revisado
        int escolhaMenuRaiz, escolhaMenuUm, escolhaMenuDoisUm, escolhaMenuDoisDois;

    //variaveis da logica de comparacao de dois atributos e resultado- revisado
        int comparaPopulacao, comparaArea, comparaPib, comparaPonto, comparaDensidade, comparaCapita, comparaSuper;
        int pontuacaoUsuario = 0, pontuacaoOponente = 0;
        const char *nomeAtributoUm, *nomeAtributoDois;

    //inicializacao do jogo - revisado
        printf("\n");
        printf("### Bem vindo ao jogo Super Trunfo! ###\n");
        printf("Para começar o jogo, precisamos dos dados da sua carta e da carta de seu oponente.\n");
        printf("Depois, podemos comparar os atributos e ver qual carta ganha a rodada.\n");


    //cadastro dos dados da carta 1 (usuario) - revisado
        printf("\n");
        printf("Por favor, insira os dados da sua carta:\n");
        printf("Digite a sigla do estado: ");
        scanf("%s", estado1);
        printf("Digite o código da carta: ");
        scanf("%s", codigo1);
        printf("Digite o nome da cidade: ");
        scanf(" %49[^\n]", cidade1);
        printf("Digite o número da população: ");
        scanf("%lu", &populacao1);
        printf("Digite a área (em km²): ");
        scanf("%f", &area1);
        printf("Digite o PIB: ");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontoTur1);

    //cadastro dos dados da carta 2 (oponente) - revisado
        printf("\n");
        printf("Agora insira os dados da carta do seu oponente:\n");
        printf("Digite a sigla do estado: ");
        scanf("%s", estado2);
        printf("Digite o código da carta: ");
        scanf("%s", codigo2);
        printf("Digite o nome da cidade: ");
        scanf(" %49[^\n]", cidade2);
        printf("Digite o número da população: ");
        scanf("%lu", &populacao2);
        printf("Digite a área (em km²): ");
        scanf("%f", &area2);
        printf("Digite o PIB: ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontoTur2);

    //calculo de atributos compostos da carta 1 - revisado
        densidadePop1 = (float)((float)populacao1 / area1);
        pibConversao1 = (pib1 * 1000000000);
        pibCapita1 = (float)(pibConversao1 / populacao1);
        superPoder1 = populacao1 + pib1 + pontoTur1 + pibCapita1 + (-densidadePop1);
        
    //calculo de atributos compostos da carta 2 - revisado
        densidadePop2 = (float)((float)populacao2 / area2);
        pibConversao2 = (pib2 * 1000000000);
        pibCapita2 = (float)(pibConversao2 / populacao2);
        superPoder2 = populacao2 + pib2 + pontoTur2 + pibCapita2 + (-densidadePop2);  
        
    //menu raiz do jogo
        printf("\n"); //quebra de linha
        printf("Escolha o modo de jogo:\n");
        printf("1. Comparar um atributo\n");
        printf("2. Comparar dois atributos\n");
        printf("3. Finalizar o jogo\n");
        printf("Digite a opção: \n");
        scanf(" %d", &escolhaMenuRaiz);
        switch (escolhaMenuRaiz)
        {
        //comparar primeiro atributo - revisado
            case 1:
                printf("\n"); //quebra de linha
                printf("Você escolheu a comparação de um atributo.\n");
                printf("\n"); //quebra de linha
                printf("Agora escolha qual o atributo para comparação:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
                printf("6. PIB per Capita\n");
                printf("7. Super Poder\n");
                printf("Escolha: ");
                scanf(" %d", &escolhaMenuUm);
                switch (escolhaMenuUm)
                {
                //comparacao de populacao - revisado
                    case 1:
                        printf("\n"); //quebra de linha
                        printf("A sua carta, %s, possui %lu habitantes.\n", cidade1, populacao1);
                        printf("A carta de seu oponente, %s, possui %lu habitantes.\n", cidade2, populacao2);
                        printf("\n"); //quebra de linha
                        if(populacao1 > populacao2){
                            printf("Parabéns, você venceu seu oponente!\n");
                        }else if(populacao1 < populacao2){
                            printf("Infelizmente, você perdeu para seu oponente.\n");
                        }else{
                            printf("Você e seu oponente empataram a rodada!\n");
                        }
                    break;
                
                //comparacao de area - revisado
                    case 2:
                        printf("\n"); //quebra de linha
                        printf("A sua carta, %s, possui %.2f km².\n", cidade1, area1);
                        printf("A carta de seu oponente, %s, possui %.2f km².\n", cidade2, area2);
                        printf("\n"); //quebra de linha
                        if(area1 > area2){
                            printf("Parabéns, você venceu seu oponente!\n");
                        }else if(area1 < area2){
                            printf("Infelizmente, você perdeu para seu oponente.\n");
                        }else{
                            printf("Você e seu oponente empataram a rodada!\n");
                        }
                    break;

                //comparacao de pib - revisado
                    case 3:
                        printf("\n"); //quebra de linha
                        printf("A sua carta, %s, possui PIB de R$%.2f bilhões.\n", cidade1, pib1);
                        printf("A carta de seu oponente, %s, possui PIB de R$%.2f bilhões.\n", cidade2, pib2);
                        printf("\n"); //quebra de linha
                        if(pib1 > pib2){
                            printf("Parabéns, você venceu seu oponente!\n");
                        }else if(pib1 < pib2){
                            printf("Infelizmente, você perdeu para seu oponente.\n");
                        }else{
                            printf("Você e seu oponente empataram a rodada!\n");
                        }
                    break;
                
                //comparacao de pontos turisticos - revisado
                    case 4:
                        printf("\n"); //quebra de linha
                        printf("A sua carta, %s, possui %d pontos turísticos.\n", cidade1, pontoTur1);
                        printf("A carta de seu oponente, %s, possui %d pontos turísticos.\n", cidade2, pontoTur2);
                        printf("\n"); //quebra de linha
                        if(pontoTur1 > pontoTur2){
                            printf("Parabéns, você venceu seu oponente!\n");
                        }else if(pontoTur1 < pontoTur2){
                            printf("Infelizmente, você perdeu para seu oponente.\n");
                        }else{
                            printf("Você e seu oponente empataram a rodada!\n");
                        }
                    break;

                //comparacao de densidade demografica - revisado
                    case 5:
                        printf("\n"); //quebra de linha
                        printf("A sua carta, %s, possui %.2f hab/km².\n", cidade1, densidadePop1);
                        printf("A carta de seu oponente, %s, possui %.2f hab/km².\n", cidade2, densidadePop2);
                        printf("\n"); //quebra de linha
                        if(densidadePop1 < densidadePop2){
                            printf("Parabéns, você venceu seu oponente!\n");
                        }else if(densidadePop1 > densidadePop2){
                            printf("Infelizmente, você perdeu para seu oponente.\n");
                        }else{
                            printf("Você e seu oponente empataram a rodada!\n");
                        }
                    break;

                //comparacao de pib per capita - revisado
                    case 6:
                        printf("\n"); //quebra de linha
                        printf("A sua carta, %s, possui PIB per Capita de R$ %.2f.\n", cidade1, pibCapita1);
                        printf("A carta de seu oponente, %s, possui PIB per Capita de R$ %.2f.\n", cidade2, pibCapita2);
                        printf("\n"); //quebra de linha
                        if(pibCapita1 > pibCapita2){
                            printf("Parabéns, você venceu seu oponente!\n");
                        }else if(pibCapita1 < pibCapita2){
                            printf("Infelizmente, você perdeu para seu oponente.\n");
                        }else{
                            printf("Você e seu oponente empataram a rodada!\n");
                        }
                    break;

                //comparacao de super poder - revisado
                    case 7:
                        printf("\n"); //quebra de linha
                        printf("A sua carta, %s, possui Super Poder de %.2f.\n", cidade1, superPoder1);
                        printf("A carta de seu oponente, %s, possui Super Poder de %.2f.\n", cidade2, superPoder2);
                        printf("\n"); //quebra de linha
                        if(superPoder1 > superPoder2){
                            printf("Parabéns, você venceu seu oponente!\n");
                        }else if(superPoder1 < superPoder2){
                            printf("Infelizmente, você perdeu para seu oponente.\n");
                        }else{
                            printf("Você e seu oponente empataram a rodada!\n");
                        }
                    break;

                //opcao de entrada invalida - revisado
                    default:
                        printf("\n"); //quebra de linha
                        printf("Opção escolhida inválida.\n");
                    break;
                }
            break;

        //comparar segundo atributos - revisado
            case 2:
                printf("\n"); //quebra de linha
                printf("Você escolheu a comparação de dois atributos.\n");
                printf("Primeiro, escolha o primeiro atributo para comparação:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
                printf("6. PIB per Capita\n");
                printf("7. Super Poder\n");
                printf("Escolha: ");
                scanf(" %d", &escolhaMenuDoisUm);
                printf("\n"); //quebra de linha
                printf("Agora, escolha o segundo atributo para comparação (diferente do primeiro):\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
                printf("6. PIB per Capita\n");
                printf("7. Super Poder\n");
                printf("Escolha: ");
                scanf(" %d", &escolhaMenuDoisDois);

            //verifica se atributos escolhidos sao iguais - revisado
                if(escolhaMenuDoisDois == escolhaMenuDoisUm){
                    printf("O segundo atributo não pode ser igual ao primeiro. Tente novamente.\n");
                }

            //comparacao do primeiro atributo - revisado
                if(escolhaMenuDoisUm == 1){
                    pontuacaoUsuario += (populacao1 > populacao2) ? 1 : 0;
                    pontuacaoOponente += (populacao1 < populacao2) ? 1 : 0;
                }else if(escolhaMenuDoisUm == 2){
                    pontuacaoUsuario += (area1 > area2) ? 1 : 0;
                    pontuacaoOponente += (area1 < area2) ? 1 : 0;
                }else if (escolhaMenuDoisUm == 3){
                    pontuacaoUsuario += (pib1 > pib2) ? 1 : 0;
                    pontuacaoOponente += (pib1 < pib2) ? 1 : 0;
                }else if(escolhaMenuDoisUm == 4){
                    pontuacaoUsuario += (pontoTur1 > pontoTur2) ? 1 : 0;
                    pontuacaoOponente += (pontoTur1 < pontoTur2) ? 1 : 0;
                } else if (escolhaMenuDoisUm == 5){
                    pontuacaoUsuario += (densidadePop1 < densidadePop2) ? 1 : 0;
                    pontuacaoOponente += (densidadePop1 > densidadePop2) ? 1 : 0;
                }else if(escolhaMenuDoisUm == 6){
                    pontuacaoUsuario += (pibCapita1 > pibCapita2) ? 1 : 0;
                    pontuacaoOponente += (pibCapita1 < pibCapita2) ? 1 : 0;
                }else if(escolhaMenuDoisUm == 7){
                    pontuacaoUsuario += (superPoder1 > superPoder2) ? 1 : 0;
                    pontuacaoOponente += (superPoder1 < superPoder2) ? 1 : 0;
                }

            //comparacao do segundo atributo - revisado
                if(escolhaMenuDoisDois == 1){
                    pontuacaoUsuario += (populacao1 > populacao2) ? 1 : 0;
                    pontuacaoOponente += (populacao1 < populacao2) ? 1 : 0;
                }else if(escolhaMenuDoisDois == 2){
                    pontuacaoUsuario += (area1 > area2) ? 1 : 0;
                    pontuacaoOponente += (area1 < area2) ? 1 : 0;
                }else if (escolhaMenuDoisDois == 3){
                    pontuacaoUsuario += (pib1 > pib2) ? 1 : 0;
                    pontuacaoOponente += (pib1 < pib2) ? 1 : 0;
                }else if(escolhaMenuDoisDois == 4){
                    pontuacaoUsuario += (pontoTur1 > pontoTur2) ? 1 : 0;
                    pontuacaoOponente += (pontoTur1 < pontoTur2) ? 1 : 0;
                } else if (escolhaMenuDoisDois == 5){
                    pontuacaoUsuario += (densidadePop1 < densidadePop2) ? 1 : 0;
                    pontuacaoOponente += (densidadePop1 > densidadePop2) ? 1 : 0;
                }else if(escolhaMenuDoisDois == 6){
                    pontuacaoUsuario += (pibCapita1 > pibCapita2) ? 1 : 0;
                    pontuacaoOponente += (pibCapita1 < pibCapita2) ? 1 : 0;
                }else if(escolhaMenuDoisDois == 7){
                    pontuacaoUsuario += (superPoder1 > superPoder2) ? 1 : 0;
                    pontuacaoOponente += (superPoder1 < superPoder2) ? 1 : 0;
                }

            //relaciona o numero do menu com o nome do primeiro atributo escolhido
                if (escolhaMenuDoisUm == 1){
                    nomeAtributoUm = "População";
                }else if(escolhaMenuDoisUm == 2){
                    nomeAtributoUm = "Área";
                }else if(escolhaMenuDoisUm == 3){
                    nomeAtributoUm = "PIB";
                }else if(escolhaMenuDoisUm == 4){
                    nomeAtributoUm = "Pontos Turísticos";
                }else if(escolhaMenuDoisUm == 5){
                    nomeAtributoUm = "Densidade Demográfica";
                }else if(escolhaMenuDoisUm == 6){
                    nomeAtributoUm = "PIB per Capita";
                }else if(escolhaMenuDoisUm == 7){
                    nomeAtributoUm = "Super Poder";
                }

            //relaciona o numero do menu com o nome do segundo atributo escolhido
                if (escolhaMenuDoisDois == 1){
                    nomeAtributoDois = "População";
                }else if(escolhaMenuDoisDois == 2){
                    nomeAtributoDois = "Área";
                }else if(escolhaMenuDoisDois == 3){
                    nomeAtributoDois = "PIB";
                }else if(escolhaMenuDoisDois == 4){
                    nomeAtributoDois = "Pontos Turísticos";
                }else if(escolhaMenuDoisDois == 5){
                    nomeAtributoDois = "Densidade Demográfica";
                }else if(escolhaMenuDoisDois == 6){
                    nomeAtributoDois = "PIB per Capita";
                }else if(escolhaMenuDoisDois == 7){
                    nomeAtributoDois = "Super Poder";
                }
                
            //resultado das comparacoes
                printf("\n"); //quebra de linha
                printf("Você escolheu a comparação dos atributos: '%s' e '%s' das cartas inseridas.\n", nomeAtributoUm, nomeAtributoDois);
                printf("Contabilizando a pontuação...\n");
                printf("\n"); //quebra de linha
                printf("A sua carta(%s) fez: %d pontos\n", cidade1, pontuacaoUsuario);
                printf("A carta do oponente(%s) fez: %d pontos\n", cidade2, pontuacaoOponente);
                printf("\n"); //quebra de linha
                if(pontuacaoUsuario > pontuacaoOponente){
                    printf("Você venceu seu oponente com %d pontos a mais!\n", pontuacaoUsuario - pontuacaoOponente);
                }else if(pontuacaoUsuario < pontuacaoOponente){
                    printf("Você perdeu do seu oponente por %d pontos de diferença\n", pontuacaoOponente - pontuacaoUsuario);
                }else{
                    printf("Você e seu oponente empataram com a mesma pontuação.\n");
                }
            break;
            
        //finaliza o jogo
            case 3:
                printf("Obrigado por jogar!\n");
            break;

        //opcao invalida
            default:
                printf("Opção escolhida inválida.\n");
            break;
        }

    return 0;
}