#include <stdio.h>

//desafio-logica
//nivel aventureiro
//nivel mestre
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

    int escolha, escolha1, somaPonto, ponto, result;

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

    


    printf("\n----------________--------\n");
    printf("Comparação de Cartas\n");
    printf("Opção 1 - População\n");
    printf("Opção 2 - Area\n");
    printf("Opção 3 - PIB\n");
    printf("Opção 4 - Pontos Turisticos\n");
    printf("Opção 5 - Densidade Populacional\n");
    printf("Opção 6 - PIB per Capital\n");
    printf("Escolha um dos Atributos para Comparar: ");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
              if(populacao > populacao1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: População\n");
                printf("Carta 1 Venceu com: %d\n", populacao);
                ponto = 1;
              }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: População\n");
                printf("Carta 2 Venceu com: %d\n", populacao1);
                ponto = 0;
                
            }
            break;   
        case 2:
            if(area > area1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: area\n");
                printf("Carta 1 Venceu com: %.2f\n", area);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: area\n");
                printf("Carta 2 Venceu com: %.2f\n", area1);
                ponto = 0;
            }
            break;
        case 3:
            if(pib > pib1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pib\n");
                printf("Carta 1 Venceu com: %.2f\n", pib);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pib\n");
                printf("Carta 2 Venceu com: %.2f\n", pib1);
                ponto = 0;
            }
            break;
        case 4:
            if(pontos_turisticos > pontos_turisticos1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pontos turisticos\n");
                printf("Carta 1 Venceu com: %d\n", pontos_turisticos);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pontos turisticos\n");
                printf("Carta 2 Venceu com: %c\n", pontos_turisticos1);
                ponto = 0;
            }
            break;
        case 5:
            if(densidade_populacional >densidade_populacional){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo:densidade populacional\n");
                printf("Carta 1 Venceu com: %.2f\n",densidade_populacional);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo:densidade populacional\n");
                printf("Carta 2 Venceu com: %.2f\n",densidade_populacional);
                ponto = 0;
            }
            break;
        case 6:
            if(PIB_per_capita > PIB_per_capita){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: PIB per capita\n");
                printf("Carta 1 Venceu com: %d\n", PIB_per_capita);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: PIB per capita\n");
                printf("Carta 2 Venceu com: %d\n", PIB_per_capita);
                ponto = 0;
            }
            break;
            default:
            
                printf("Empate Em seus Atributos");
            
            break;
    }
    somaPonto=ponto;
    printf("\n----------________--------\n");
    printf("Comparação de Cartas\n");
    printf("Opção 1 - População\n");
    printf("Opção 2 - Area\n");
    printf("Opção 3 - PIB\n");
    printf("Opção 4 - Pontos Turisticos\n");
    printf("Opção 5 - Densidade Populacional\n");
    printf("Opção 6 - PIB per Capital\n");
    printf("Escolha um dos Atributos para Comparar: ");
    scanf("%d", &escolha1);
    (escolha == escolha1) ? printf("Escolheu Atributo Iqual "):printf("Ok");

    switch (escolha1){
        case 1:
              if(populacao > populacao1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: População\n");
                printf("Carta 1 Venceu com: %d\n", populacao);
                ponto = 1;
              }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: População\n");
                printf("Carta 2 Venceu com: %d\n", populacao1);
                ponto = 0;
                
            }
            break;   
        case 2:
            if(area > area1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: area\n");
                printf("Carta 1 Venceu com: %.2f\n", area);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: area\n");
                printf("Carta 2 Venceu com: %.2f\n", area1);
                ponto = 0;
            }
            break;
        case 3:
            if(pib > pib1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pib\n");
                printf("Carta 1 Venceu com: %.2f\n", pib);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pib\n");
                printf("Carta 2 Venceu com: %.2f\n", pib1);
                ponto = 0;
            }
            break;
        case 4:
            if(pontos_turisticos > pontos_turisticos1){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pontos turisticos\n");
                printf("Carta 1 Venceu com: %d\n", pontos_turisticos);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: pontos turisticos\n");
                printf("Carta 2 Venceu com: %c\n", pontos_turisticos1);
                ponto = 0;
            }
            break;
        case 5:
            if(densidade_populacional >densidade_populacional){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo:densidade populacional\n");
                printf("Carta 1 Venceu com: %.2f\n",densidade_populacional);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo:densidade populacional\n");
                printf("Carta 2 Venceu com: %.2f\n",densidade_populacional);
                ponto = 0;
            }
            break;
        case 6:
            if(PIB_per_capita > PIB_per_capita){
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: PIB per capita\n");
                printf("Carta 1 Venceu com: %d\n", PIB_per_capita);
                ponto = 1;
            }else{
                printf("Pais da Carta 1: %c\n", estado);
                printf("Pais da Carta 2: %c\n", estado1);
                printf("Atributo: PIB per capita\n");
                printf("Carta 2 Venceu com: %d\n", PIB_per_capita);
                ponto = 0;
            }
            break;
            default:
            
                printf("Empate Em seus Atributos");
            
            break;
    }

    somaPonto += ponto;
    if(somaPonto > 1){
        printf("Voce Venceu!!!\n");
    }else if(somaPonto < 1){
        printf("Você Perdeu\n");
    }else {
        printf("Voce Empatou\n");
    }


    return 0;
}