#include<stdio.h>
int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npb1, npb2;

    printf("letra do estado:");
    scanf(" %c", &estado1);

    printf("codigo da carta:");
    scanf("%s", codigo1);

    printf("cidade:");
    scanf("%s", cidade1);

    printf("qual a população da cidade:");
    scanf("%d", &populacao1);

    printf("qual a área da cidade:");
    scanf("%f", &area1);

    printf("qual o pib da cidade:");
    scanf("%f", &pib1);

    printf("quantos pontos turisticos tem na cidade:");
    scanf("%d", &npb1);
    
    printf("letra do segundo estado:");
    scanf(" %c", &estado2);

    printf("codigo da segunda carta:");
    scanf("%s", codigo2);

    printf("cidade:");
    scanf("%s", cidade2);

    printf("qual a população da segunda cidade:");
    scanf("%d", &populacao2);

    printf("qual a área da segunda cidade:");
    scanf("%f", &area2);

    printf("qual o pib da segunda cidade:");
    scanf("%f", &pib2);

    printf("quantos pontos turisticos tem na segunda cidade:");
    scanf("%d", &npb2);

//informações da carta 1

    printf("carta 1:\n");
    printf("letra que representa o estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("área da cidade: %3f\n", area1);
    printf("pib: %3f\n", pib1);
    printf("número de pontos turísticos: %d\n", npb1);
    
//informações da carta 2   
    
    printf("\ncarta 2:\n");
    printf("letra que representa o estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("área da cidade: %3f\n", area2);
    printf("pib: %3f\n", pib2);
    printf("número de pontos turísticos: %d\n", npb2);











}