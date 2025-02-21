#include <stdio.h>

int main(){
    // Variáveis para a Carta 1
    char estado[3];
    char codigodacarta[20];
    char nomedacidade[20];
    int populacao;
    int numerodepontosturisticos;
    float area;
    float pib;

    // Variáveis para a Carta 2
    char estado1[3];
    char codigodacarta1[20];
    char nomedacidade1[20];
    int populacao1;
    int numerodepontosturisticos1;
    float area1;
    float pib1;

    // Preenchendo a Carta 1

    printf("Carta 1: \n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("Código: ");
    scanf("%s", &codigodacarta);

    printf("Nome da Cidade: ");
    scanf("%s", &nomedacidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticos);

    //Preenchendo a Carta 2

    printf("\nCarta 2: \n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigodacarta1);

    printf("Nome da Cidade: ");
    scanf("%s", nomedacidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticos1);

    // Dados da Carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Ponto Turísticos: %d\n", numerodepontosturisticos);

    // Dados da Carta 2

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Ponto Turísticos: %d\n", numerodepontosturisticos1);

    return 0;




    
}