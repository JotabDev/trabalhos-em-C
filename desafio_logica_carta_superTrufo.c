#include <stdio.h>

// Nivel Novato
//aplicando o nivel Aventureiro
// Principal
//Aplicando o Nível Mestre
int main() {
 
    //Declaração de Variaveis
    char codigo[4];
    char estado;
    char nome_cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;
    float super_poder;
    

    // Dados da Carta 2
    char codigo1[4];
    char estado1;
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float PIB_per_capita1;
    float super_poder1;

    int resultPopulação;
    int resultArea;
    int resultPIB;
    int resultPontoTurismo;
    int resultDensidade;
    int resultPIBperCapital;
    int resultSuperPoder;

    // Cadastro da Carta 1
    printf("Carta 1:\n ");
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo);
    estado1 = codigo1[0]; // extrai a letra do estado
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);
  
    // Cadastro da Carta 2
    printf("\nCarta 2:\n");
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo1);
    estado1 = codigo1[0];
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

     //Calculo Densidade e PIB per Capita

    densidade_populacional = (float) populacao / area;
    PIB_per_capita = (float) pib / populacao;
    densidade_populacional1 = (float) populacao1 / area1;
    PIB_per_capita1 = (float) pib1 / populacao1;
    super_poder = (float)(populacao + area + pib + pontos_turisticos + PIB_per_capita + 1/ densidade_populacional);
    super_poder1 = (float)(populacao1 + area1+ pib1 + pontos_turisticos1 + PIB_per_capita1 + 1/ densidade_populacional1);
    resultPopulação = populacao > populacao1;
    resultArea = area > area1;
    resultPIB = pib > pib1;
    resultPontoTurismo = pontos_turisticos > pontos_turisticos1;
    resultDensidade = densidade_populacional > densidade_populacional1;
    resultPIBperCapital = PIB_per_capita > PIB_per_capita1;
    resultSuperPoder = super_poder > super_poder1;

    // Exibição dos Dados das Cartas:
    // Exibição formatada

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
     printf("PIB Per Capital: %.2f reais\n", PIB_per_capita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB Per Capital: %.2f reais\n", PIB_per_capita1);

    
    //implementando Nivel Novato a Verificação IF-ELSE
    // Ex de exibição
   // Carta 1 - São Paulo (SP): 12.300.000
   // Carta 2 - Rio de Janeiro (RJ): 6.000.000
   // Resultado: Carta 1 (São Paulo) venceu!

    printf("\n----------________--------\n");
    printf("Comparação de Cartas\n");
    printf("Carta 1 - %s: %d\n", estado, populacao);
    printf("Carta 2 - %s: %d\n", estado1, populacao1);
    

    if(populacao > populacao1){
        printf("População: Carta 1 venceu com: %d\n", populacao);
    }else{
        printf("População: Carta 2 venceu com %d\n", populacao1);
    }

    // Resultado Zero referente a Carta 2, resultado 1 Referente a carta 1;

    printf("Àrea: Carta %i venceu %i\n", resultArea, resultArea);
    printf("PIB: Carta %i venceu %i\n", resultPIB, resultPIB);
    printf("Ponto Turísticos: Carta %i venceu %i\n", resultPontoTurismo, resultPontoTurismo);
    printf("Densidade populacional: Carta %i venceu %i\n", resultDensidade, resultDensidade);
    printf("PIB per Capital: Carta %i venceu %i\n", resultPIBperCapital, resultPIBperCapital);
    printf("Super Power: Carta %i venceu %i\n", resultSuperPoder, resultSuperPoder);


    return 0;
}