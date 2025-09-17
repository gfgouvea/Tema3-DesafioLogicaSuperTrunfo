#include <stdio.h>

int main() {
   
    //Declaração das variáveis.
    //Optei por agrupar as variáveis do mesmo tipo na mesma linha para economizar espaço vertical.
    char estado1[15], estado2[15], codigo1[5], codigo2[5], cidade1[15], cidade2[15];    
    int tur1, tur2, pop1, pop2;  
    float area1, area2, pib1, pib2, denpop1, denpop2, pibpc1, pibpc2, super1, super2;   
    
    //Aqui inicio com uma orientação para o usuário para que começe a digitar os dados da carta.
    //Logo em seguida vou pedindo que entre cada atributo da carta.
    printf("Digite os dados da Carta 1\n\n");
    
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
    //Em seguida, repete o processo de coleta de dados e de cálculo de atributos.
    printf("\nDADOS DA CARTA 1 ARMAZENADOS COM SUCESSO!\n\n\n");
   
    printf("Digite os dados da Carta 2\n\n");
    
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
    printf("AS CARTAS CADASTRADAS SÃO AS SEGUINTES:\n\n\n");
    
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

    printf("------------------------------------------------\n\n");

    //inicio das comparações

    if (pop1 > pop2){
        printf("Carta 1 - %s (%s) - População: %d\n", cidade1, estado1, pop1);
        printf("Carta 2 - %s (%s) - População: %d\n\n", cidade2, estado2, pop2);
        printf("VENCEDORA: Carta 1 (%s)!!\n\n", cidade1);
    }
    else{
        if (pop1 == pop2){
            printf("Carta 1 - %s (%s) - População: %d\n", cidade1, estado1, pop1);
            printf("Carta 2 - %s (%s) - População: %d\n\n", cidade2, estado2, pop2);
            printf("RESULTADO: EMPATE!!\n\n");
        }
        else{
            printf("Carta 1 - %s (%s) - População: %d\n", cidade1, estado1, pop1);
            printf("Carta 2 - %s (%s) - População: %d\n\n", cidade2, estado2, pop2);
            printf("VENCEDORA: Carta 2 (%s)!!\n\n", cidade2);       
        } 
    }

    printf("FIM DE JOGO. OBRIGADO POR JOGAR SUPER TRUNFO!!\n\n\n");
  
    return 0;
}
