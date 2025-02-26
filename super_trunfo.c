#include <stdio.h>

int main(){

    //Abaixo, são declaradas as variáveis que serão usadas nas duas cartas.
    // O número "1" é usado como sufixo para salvar e representar as informações da CARTA 1.
    // O número "2" é usado como sufixo para salvar e representar as informações da CARTA 2.
    
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;

    // A inserção de cada carta foi separada em duas etapas diferentes, e os pontos entre uma linha e outra são para separar o código, organizando para destacar cada informação.
    // No caso dos caracteres do tipo CHAR, como não foi usado fgets, os nomes das cidades precisam ser digitados juntos e sem caracteres especiais, com a finalidade de não bugar o buffer do terminal. 

    printf("INSERÇÃO DE DADOS DA CARTA 1\n");

    printf(".............\nEstado (Letra Única): \n");
    scanf(" %c", &estado1);

    printf(".............\nCódigo: \n");
    scanf("%s", &codigo1);

    printf(".............\nCidade (Sem espaços ou caracteres especiais): \n");
    scanf("%s", &cidade1);

    printf(".............\nPopulação: \n");
    scanf("%d", &populacao1);

    printf(".............\nÁrea (em km²): \n");
    scanf("%f", &area1);

    printf(".............\nPIB (em bilhões de Reais): \n");
    scanf("%f", &pib1);

    printf(".............\nQuantidade de pontos turísticos: \n");
    scanf("%d", &pturisticos1);

    //Comentário feito para servir de espaço entre os códigos da carta 1 e os códigos da carta 2.

    printf(".............\nINSERÇÃO DE DADOS DA CARTA 2\n");

    printf(".............\nEstado (Letra Única): \n");
    scanf(" %c", &estado2);

    printf(".............\nCódigo: \n");
    scanf("%s", &codigo2);

    printf(".............\nCidade (Sem espaços ou caracteres especiais): \n");
    scanf("%s", &cidade2);

    printf(".............\nPopulação: \n");
    scanf("%d", &populacao2);

    printf(".............\nÁrea (em km²): \n");
    scanf("%f", &area2);

    printf(".............\nPIB (em bilhões de Reais): \n");
    scanf("%f", &pib2);

    printf(".............\nQuantidade de pontos turísticos: \n");
    scanf("%d", &pturisticos2);

    //Comentário feito para servir de espaço entre os códigos da carta 2 e a exibição total das cartas.

    printf(".............\nCADASTRO DAS CARTAS\n");
    
    printf(".............\n- CARTA 1 -\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea (km²): %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pturisticos1);
    printf(".............\n- CARTA 2 -\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea (km²): %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pturisticos2);

    return 0;
}