#include <stdio.h>

int main() {
    // Variáveis 
    char estado1, estado2;                  
    char codigoCarta1[5], codigoCarta2[5];  
    char nomeCidade1[50], nomeCidade2[50];  
    int populacao1, populacao2;             
    float area1, area2;                     
    float pibcidade1, pibcidade2;                       
    int pontosTuristicos1, pontosTuristicos2; 
    float densidadepop1, densidadepop2;
    float pib1, pib2;
    
    //primeira carta
    printf("\n\n--- INFORMAÇÕES DA PRIMEIRA CARTA ---\n\n");

    printf("Qual o Estado(De A a H): \n");
    scanf(" %c", &estado1);

    printf("Qual o código da carta(EX: A02): \n");
    scanf("%s", codigoCarta1);

    printf("Qual o nome da cidade: \n");
    scanf(" %s", nomeCidade1);
    printf("Qual a população atual: \n");
    scanf(" %d", &populacao1);

    printf("Qual à área em km²: \n");
    scanf(" %f", &area1);

    printf("Qual o pib: \n");
    scanf(" %f", &pibcidade1);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos1);

    //Segunda carta
    printf("\n\n--- INFORMAÇÕES DA SEGUNDA CARTA ---\n\n");

    printf("Qual o Estado(De A a H): \n");
    scanf(" %c", &estado2);

    printf("Qual o código da carta(EX: A02): \n");
    scanf(" %s", codigoCarta2);

    printf("Qual o nome da cidade: \n");
    scanf(" %s", nomeCidade2);

    printf("Qual a população atual: \n");
    scanf(" %d", &populacao2);

    printf("Qual à área em km²: \n");
    scanf(" %f", &area2);

    printf("Qual o pib: \n");
    scanf(" %f", &pibcidade2);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos2);

    //OPERAÇÕES DE CÁLCULO

    densidadepop1 = (populacao1 / area1);
    densidadepop2 = (populacao2 / area2);

    pib1 = (pibcidade1 / populacao1);
    pib2 = (pibcidade2 / populacao2);

    //Exibindo os resultados
    printf("\n\n---- CARTA 1 ----\n\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área em Km²: %.2f Km² \n", area1);
    printf("PIB: %f \n", pibcidade1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Desidade populacional: %.2f hab/km² \n", densidadepop1);
    printf("PIB per capita: %.2f reais \n", pib1);

    printf("\n\n---- CARTA 2 ---- \n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área em Km²: %.2f Km² \n", area2);
    printf("PIB: %f \n", pibcidade2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Desidade populacional: %.2f hab/km² \n", densidadepop2);
    printf("PIB per capita: %.2f reais \n", pib2);

    return 0;
}