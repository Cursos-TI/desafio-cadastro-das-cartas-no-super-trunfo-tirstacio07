#include<stdio.h>
int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;
    float pibpc1, pibpc2;
    float dencidadepop1, dencidadepop2;
    float superpoder1, superpoder2;

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
    scanf("%d", &npt1);

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
    scanf("%d", &npt2);

//dencidade populacional carta 1

    dencidadepop1 = populacao1 / area1;

//dencidade populacional carta 2

    dencidadepop2 = populacao2 / area2;    

//pib per capito carta 1

    pibpc1 = pib1 / populacao1;

//pib per capito carta 2

    pibpc2 = pib2 / populacao2;  

// super poder carta 1

    superpoder1 = populacao1 + area1 + pib1 + npt1 + pibpc1 + dencidadepop1;
    
// super poder carta 2

    superpoder2 = populacao2 + area2 + pib2 + npt2 + pibpc2 + dencidadepop2;

//informações da carta 1

    printf("carta 1:\n");
    printf("letra que representa o estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("área da cidade: %.1f\n", area1);
    printf("pib: %.1f\n", pib1);
    printf("número de pontos turísticos: %d\n", npt1);
    printf("decidade populacional é: %.1f\n", dencidadepop1);
    printf("pib percapito é: %.1f\n", pibpc1);
    printf("super poder da carta é: %.1f\n\n", superpoder1);

//informações da carta 2   

    printf("\ncarta 2:\n");
    printf("letra que representa o estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("área da cidade: %3f\n", area2);
    printf("pib: %3f\n", pib2);
    printf("número de pontos turísticos: %d\n", npt2);
    printf("decidade populacional é: %.1f\n", dencidadepop2);
    printf("pib percapito é: %.1f\n", pibpc2);
    printf("super poder da carta é: %.1f\n\n", superpoder2);

    printf("maior população é: %d\n", populacao1 > populacao2);
    printf("maior area é: %d\n", area1 > area2);
    printf("maior pib é: %d\n", pib1 > pib2);
    printf("maior número de pontoa turísticos é: %d\n", npt1 > npt2);
    printf("maior super poder é: %d\n", superpoder1 > superpoder2);
    
    








}