#include <stdio.h>

int main() {
   
    //Declaração das variáveis.
    //Optei por agrupar as variáveis do mesmo tipo na mesma linha para economizar espaço vertical.
    char estado1[15], estado2[15], codigo1[5], codigo2[5], cidade1[15], cidade2[15];    
    int tur1, tur2, pop1, pop2, op1, op2, carta1 = 0, carta2 = 0, empate = 0;
    float area1, area2, pib1, pib2, denpop1, denpop2, pibpc1, pibpc2;
    double super1, super2, somaatr1, somaatr2;
    
    //Aqui inicio com uma orientação para o usuário para que começe a digitar os dados da carta.
    //Logo em seguida vou pedindo que entre cada atributo da carta.

    printf("------------------------------------------------\n");
    printf("CADASTRO DE ATRIBUTOS: CARTA 1\n");
    printf("------------------------------------------------\n\n");
    
	printf("Estado: ");
    scanf("%s", estado1);                                                            

    printf("Código: ");
    scanf("%s", codigo1);
        
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &pop1);
    
    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB em Bilhoes de R$: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &tur1);
    
    //Inicio a geração dos atributos calculados. Conversões explicitas garantem que o resultado seja o tipo esperado.
    //PIB convertido da escala de bilhões para escala unitária para exibição mais amigável.
    denpop1 = (float) pop1 / area1;
    pibpc1 = (float) (pib1 * 1000000000) / pop1;
    super1 = (double) pop1 + area1 + (pib1 * 1000000000) + tur1 + (1 / denpop1) + pibpc1;

    //Mensagem anunciando que os dados da carta foram armazenados com sucesso para orientação do usuário.
    printf("\nDADOS DA CARTA 1 ARMAZENADOS COM SUCESSO!\n\n\n");

   //Em seguida, repete o processo de coleta de dados e de cálculo de atributos.
    printf("------------------------------------------------\n");
    printf("CADASTRO DE ATRIBUTOS: CARTA 2\n");
    printf("------------------------------------------------\n\n");
    
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &pop2);
    
    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB em Bilhoes de R$: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &tur2);
    
    denpop2 = (float) pop2 / area2;
    pibpc2 = (float) (pib2 * 1000000000) / pop2;
    super2 = (double) pop2 + area2 + (pib2 * 1000000000) + tur2 + (1 / denpop2) + pibpc2;
    
    printf("\nDADOS DA CARTA 2 ARMAZENADOS COM SUCESSO!\n");

    //aqui exibo os dados consolidados das duas cartas antes de iniciar as comparaçoes.
    printf("------------------------------------------------\n");
    printf("AS CARTAS CADASTRADAS SÃO AS SEGUINTES:\n");
    printf("------------------------------------------------\n\n");
    
    printf("**Carta 1**\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bi de reais.\n", pib1);
    printf("Pontos turísticos: %d\n", tur1);
    printf("Densidade populacional: %.2f habitantes por km²\n", denpop1);
    printf("PIB per capita: R$ %.2f por habitante\n", pibpc1);
    printf("Superpoder: %.2f\n\n", super1);
    
    printf("**Carta 2**\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bi de reais.\n", pib2);
    printf("Pontos turísticos: %d\n", tur2);
    printf("Densidade populacional: %.2f habitantes por km²\n", denpop2);
    printf("PIB per capita: R$ %.2f por habitante\n", pibpc2);
    printf("Superpoder: %.2f\n\n", super2);

    //inicio do menu interarivo para escolha do primeiro atributo a ser comparado

    printf("------------------------------------------------\n");
    printf("SELECIONE PRIMEIRO ATRIBUTO A SER COMPARADO\n");
    printf("------------------------------------------------\n\n");

    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos turísticos\n");
    printf("[5] Densidade populacional\n");
    printf("[6] PIB per capita\n");
    printf("[7] Superpoder\n\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op1);

    printf("\n------------------------------------------------\n");
    printf("SELECIONE SEGUNDO ATRIBUTO A SER COMPARADO\n");
    printf("------------------------------------------------\n\n");

    op1 == 1 ? : printf("[1] População\n");
	op1 == 2 ? : printf("[2] Área\n");
    op1 == 3 ? : printf("[3] PIB\n");
    op1 == 4 ? : printf("[4] Pontos turísticos\n");
    op1 == 5 ? : printf("[5] Densidade populacional\n");
    op1 == 6 ? : printf("[6] PIB per capita\n");
    op1 == 7 ? : printf("[7] Superpoder\n\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op2);

    if (op1 == op2){
        printf("Opção INVÁLIDA!\n\n");
    } else{ 
        //primeiro resultado
    switch (op1){
        case 1: //população
            somaatr1 = (double) pop1;
            somaatr2 = (double) pop2;
            printf("\n\n<<<<<PRIMEIRA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): População é %d\n", cidade1, estado1, pop1);
            printf("Carta 2 - %s (%s): População é %d\n", cidade2, estado2, pop2);
            if (pop1 > pop2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (pop1 == pop2){
                empate++;
                printf("RESULTADO: Empate!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 2: //Área
            somaatr1 = (double) area1;
            somaatr2 = (double) area2;
            printf("\n\n<<<<<PRIMEIRA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Área é %.2f\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): Área é %.2f\n", cidade2, estado2, area2);
            if (area1 > area2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (area1 == area2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 3: //PIB
            somaatr1 = (double) pib1;
            somaatr2 = (double) pib2;
            printf("\n\n<<<<<PRIMEIRA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): PIB é %.2f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): PIB é %.2f\n", cidade2, estado2, pib2);
            if (pib1 > pib2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (pib1 == pib2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 4: //Pontos Turísticos
            somaatr1 = (double) tur1;
            somaatr2 = (double) tur2;
            printf("\n\n<<<<<PRIMEIRA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Pontos turísticos são %d\n", cidade1, estado1, tur1);
            printf("Carta 2 - %s (%s): Pontos turísticos são %d\n", cidade2, estado2, tur2);
            if (tur1 > tur2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (tur1 == tur2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 5: //Densidade populacional
            somaatr1 = (double) (1 / denpop1);
            somaatr2 = (double) (1 / denpop2);
            printf("\n\n<<<<<PRIMEIRA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Densidade populacional é %.2f\n", cidade1, estado1, denpop1);
            printf("Carta 2 - %s (%s): Densidade populacional é %.2f\n", cidade2, estado2, denpop2);
            if (denpop1 < denpop2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (denpop1 == denpop2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 6: //PIB per capita
            somaatr1 = (double) pibpc1;
            somaatr2 = (double) pibpc2;
            printf("\n\n<<<<<PRIMEIRA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): PIB per capita é %.2f\n", cidade1, estado1, pibpc1);
            printf("Carta 2 - %s (%s): PIB per capita é %.2f\n", cidade2, estado2, pibpc2);
            if (pibpc1 > pibpc2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (pibpc1 == pibpc2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 7: //Superpoder
            somaatr1 = (double) super1;
            somaatr2 = (double) super2;
            printf("\n\n<<<<<PRIMEIRA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Superpoder é %.2f\n", cidade1, estado1, super1);
            printf("Carta 2 - %s (%s): Superpoder é %.2f\n", cidade2, estado2, super2);
            if (super1 > super2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (super1 == super2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        default:
            printf("Opção INVÁLIDA!\n\n");
        }

        //segundo resultado
        switch (op2){
        case 1: //população
            somaatr1 = (double) somaatr1 + pop1;
            somaatr2 = (double) somaatr2 + pop2;
            printf("\n\n<<<<<SEGUNDA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): População é %d\n", cidade1, estado1, pop1);
            printf("Carta 2 - %s (%s): População é %d\n", cidade2, estado2, pop2);
            if (pop1 > pop2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (pop1 == pop2){
                empate++;
                printf("RESULTADO: Empate!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 2: //Área
            somaatr1 = (double) somaatr1 + area1;
            somaatr2 = (double) somaatr2 + area2;
            printf("\n\n<<<<<SEGUNDA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Área é %.2f\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): Área é %.2f\n", cidade2, estado2, area2);
            if (area1 > area2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (area1 == area2){
                empate++;
                printf("RESULTADO: Empate!!\n\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 3: //PIB
            somaatr1 = (double) somaatr1 + pib1;
            somaatr2 = (double) somaatr2 + pib2;
            printf("\n\n<<<<<SEGUNDA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): PIB é %.2f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): PIB é %.2f\n", cidade2, estado2, pib2);
            if (pib1 > pib2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (pib1 == pib2){
                empate++;
                printf("RESULTADO: Empate!!\n\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 4: //Pontos Turísticos
            somaatr1 = (double) somaatr1 + tur1;
            somaatr2 = (double) somaatr2 + tur2;
            printf("\n\n<<<<<SEGUNDA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Pontos turísticos são %d\n", cidade1, estado1, tur1);
            printf("Carta 2 - %s (%s): Pontos turísticos são %d\n", cidade2, estado2, tur2);
            if (tur1 > tur2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (tur1 == tur2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 5: //Densidade populacional
            somaatr1 = (double) somaatr1 + (1 / denpop1);
            somaatr2 = (double) somaatr2 + (1 / denpop2);
            printf("\n\n<<<<<SEGUNDA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Densidade populacional é %.2f\n", cidade1, estado1, denpop1);
            printf("Carta 2 - %s (%s): Densidade populacional é %.2f\n", cidade2, estado2, denpop2);
            if (denpop1 < denpop2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (denpop1 == denpop2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 6: //PIB per capita
            somaatr1 = (double) somaatr1 + pibpc1;
            somaatr2 = (double) somaatr2 + pibpc2;
            printf("\n\n<<<<<SEGUNDA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): PIB per capita é %.2f\n", cidade1, estado1, pibpc1);
            printf("Carta 2 - %s (%s): PIP per capita é %.2f\n", cidade2, estado2, pibpc2);
            if (pibpc1 > pibpc2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (pibpc1 == pibpc2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        case 7: //Superpoder
            somaatr1 = (double) somaatr1 + super1;
            somaatr2 = (double) somaatr2 + super2;
            printf("\n\n<<<<<SEGUNDA RODADA>>>>>\n");
            printf("Carta 1 - %s (%s): Superpoder é %.2f\n", cidade1, estado1, super1);
            printf("Carta 2 - %s (%s): Superpoder é %.2f\n", cidade2, estado2, super2);
            if (super1 > super2){
                carta1++;
                printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (super1 == super2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
        break;
        default:
            printf("Opção INVÁLIDA!\n\n");
        }

        printf("\n\n<<<<<TERCEIRA RODADA>>>>>\n");
        printf("Carta 1 - %s (%s): Soma de atributos é %.2f\n", cidade1, estado1, somaatr1);
        printf("Carta 2 - %s (%s): Soma de atributos é %.2f\n", cidade2, estado2, somaatr2);
        if (somaatr1 > somaatr2){
            carta1++;
            printf("RESULTADO: Carta 1 - %s (%s) venceu!\n", cidade1, estado1);
            } else if (somaatr1 == somaatr2){
                empate++;
                printf("RESULTADO: Empate!!\n");
            } else{
                carta2++;
                printf("RESULTADO: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);
            }
    
        printf("\n=============================================\n");
        printf("                PLACAR FINAL\n");
        printf("=============================================\n");
        carta1 == 1 ? printf("Carta 1 - %s (%s): 1 vitória\n", cidade1, estado1) : printf("Carta 1 - %s (%s): %d vitórias\n", cidade1, estado1, carta1);
        carta2 == 1 ? printf("Carta 2 - %s (%s): 1 vitória\n", cidade2, estado2) : printf("Carta 2 - %s (%s): %d vitórias\n", cidade2, estado2, carta2);
        empate == 1 ? printf("1 empate\n") : printf("%d empates\n\n", empate);
        if (carta1 == carta2){
            printf("O jogo terminou empatado!\n\n\n");
        } else{
            carta1 > carta2 ? printf("A Carta 1 - %s (%s), venceu por %d pontos contra %d pontos da Carta 2 - %s (%s).\n\n\n", cidade1, estado1, carta1, carta2, cidade2, estado2) : printf("A Carta 2 - %s (%s), venceu por %d pontos contra %d pontos da Carta 1 - %s (%s)\n\n\n", cidade2, estado2, carta2, carta1, cidade1, estado1);
        }
        }
    printf("=============================================\n");
    printf("FIM DE JOGO. OBRIGADO POR JOGAR SUPER TRUNFO!!\n\n\n");
  
    return 0;
}
