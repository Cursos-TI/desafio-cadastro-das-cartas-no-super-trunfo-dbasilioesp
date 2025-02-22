#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    char codigo1[3];
    char codigo2[3];
    char pais1[20];
    char pais2[20];
    char estado1[20];
    char estado2[20];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    int pontos_turisticos1;
    int pontos_turisticos2;
    float area1; 
    float area2; 
    float pib1;
    float pib2;
    float densidade_populacional1;
    float densidade_populacional2;
    float pib_percapita1;
    float pib_percapita2;

    float super_poder1, super_poder2;
    int propriedade;
    int vencedora;

    // Cadastro das Carta 1:
    printf("CADASTRO DA CARTA 1\n");
    printf("###################\n");

    printf("Digite nome do pais: \n");
    scanf("%s", &pais1);

    printf("Digite nome da estado: \n");
    scanf("%s", &estado1);
    
    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo1);

    printf("Digite o numero da populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    // Cadastro das Carta 2:
    printf("\nCADASTRO DA CARTA 2\n");
    printf("###################\n");

    printf("Digite nome do pais: \n");
    scanf("%s", &pais2);

    printf("Digite nome da estado: \n");
    scanf("%s", &estado2);
    
    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo2);

    printf("Digite o numero da populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a area (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("\n##############\n");
    printf("Qual propriedade deve ser comparada?\n");
    printf("1 - Populacao\n2 - Pontos Turisticos\n3 - Area\n4 - PIB\n5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n7 - Super Poder\n");
    printf("Digite o numero: \n");
    scanf("%d", &propriedade);

    // Calculos
    densidade_populacional1 = (float)populacao1 / area1;
    pib_percapita1 = (float)pib1 / populacao1;

    pib_percapita2 = (float)pib2 / populacao2;
    densidade_populacional2 = (float)populacao2 / area2;
    
    super_poder1 = populacao1 + pontos_turisticos1 + area1 + pib1 + densidade_populacional1 + pib_percapita1;
    super_poder2 = populacao2 + pontos_turisticos2 + area2 + pib2 + densidade_populacional2 + pib_percapita2;

    // Exibição dos Dados das Cartas:
    printf("\n");
    
    if (propriedade == 1) {
        printf("Comparando a populacao das cidades:\n");
        printf("%s: %d habitantes\n", cidade1, populacao1);
        printf("%s: %d habitantes\n", cidade2, populacao2);
        vencedora = populacao1 > populacao2;
    }

    if (propriedade == 2) {
        printf("Comparando os pontos turisticos das cidades:\n");
        printf("%s: %d pontos turisticos\n", cidade1, pontos_turisticos1);
        printf("%s: %d pontos turisticos\n", cidade2, pontos_turisticos2);
        vencedora = pontos_turisticos1 > pontos_turisticos2;
    }

    if (propriedade == 3) {
        printf("Comparando a area das cidades:\n");
        printf("%s: %.2f km2\n", cidade1, area1);
        printf("%s: %.2f km2\n", cidade2, area2);
        vencedora = area1 > area2;
    }

    if (propriedade == 4) {
        printf("Comparando o PIB das cidades:\n");
        printf("%s: %.2f PIB\n", cidade1, pib1);
        printf("%s: %.2f PIB\n", cidade2, pib2);
        vencedora = pib1 > pib2;
    }

    if (propriedade == 5) {
        printf("Comparando o densidade populacional das cidades:\n");
        printf("%s: %.2f habitantes por km2\n", cidade1, densidade_populacional1);
        printf("%s: %.2f habitantes por km2\n", cidade2, densidade_populacional2);
        vencedora = densidade_populacional1 < densidade_populacional2;
    }

    if (propriedade == 6) {
        printf("Comparando o PIB per capita das cidades:\n");
        printf("%s: %.2f por pessoa\n", cidade1, pib_percapita1);
        printf("%s: %.2f por pessoa\n", cidade2, pib_percapita2);
        vencedora = pib_percapita1 > pib_percapita2;
    }

    if (propriedade == 7) {
        printf("Comparando o Super Poder  das cidades:\n");
        printf("%s: %.2f \n", cidade1, super_poder1);
        printf("%s: %.2f \n", cidade2, super_poder2);
        vencedora = super_poder1 > super_poder2;
    }

    printf("**************\n");
    if (vencedora) {
        printf("\nA cidade %s venceu a cidade %s!", cidade1, cidade2);
    } else {
        printf("\nA cidade %s venceu a cidade %s!", cidade2, cidade1);  
    }
    printf("**************\n");
    printf("\n\n");

    return 0;
}
