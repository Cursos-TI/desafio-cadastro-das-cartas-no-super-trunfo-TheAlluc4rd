#include <stdio.h>

int main() {

    char estado1[2], estado2[2];
    char carta1[4], carta2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    
    printf("Primeiro cadastre 1 carta: \n");
    printf("Estado: ");
    scanf("%s", estado1);
    
    printf("Codigo da carta: ");
    scanf("%s", carta1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\nAgora da 2ª carta: \n");
    printf("Estado: ");
    scanf("%s", estado2);
    
    printf("Codigo da carta: ");
    scanf("%s", carta2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);
    
    printf("Carta 1:\nEstado: %s\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("\nCarta 2:\nEstado: %s\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d", pontos2);


    return 0;
}
