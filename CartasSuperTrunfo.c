#include <stdio.h>

int main() {
    // Variáveis 
    char estado1, estado2;                  
    char codigoCarta1[5], codigoCarta2[5];  
    char nomeCidade1[50], nomeCidade2[50];  
    unsigned long int populacao1, populacao2;             
    float area1, area2;                     
    float pibcidade1, pibcidade2;                       
    int pontosTuristicos1, pontosTuristicos2; 
    float densidadepop1, densidadepop2;
    float pib1, pib2;
    
    int resultadopopulacao;
    int resultadoarea;
    int resultadopibcidade;
    int resultadopontosturisticos;
    int resultadodensidade;
    int resultadopibpercapita;

    float resultadosuperpoder1, resultadosuperpoder2;
    float superpoder;

    
    //primeira carta
    printf("\n\n--- INFORMAÇÕES DA PRIMEIRA CARTA ---\n\n");

    printf("Qual o Estado(De A a H): \n");
    scanf(" %c", &estado1);

    printf("Qual o código da carta(EX: A02): \n");
    scanf("%s", codigoCarta1);

    printf("Qual o nome da cidade: \n");
    scanf(" %s", nomeCidade1);
    printf("Qual a população atual: \n");
    scanf(" %ld", &populacao1);

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
    scanf(" %ld", &populacao2);

    printf("Qual à área em km²: \n");
    scanf(" %f", &area2);

    printf("Qual o pib: \n");
    scanf(" %f", &pibcidade2);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos2);

    //OPERAÇÕES DE CÁLCULO

    densidadepop1 = ((float)populacao1 / area1);
    densidadepop2 = ((float)populacao2 / area2);

    pib1 = (pibcidade1 / (float)populacao1);
    pib2 = (pibcidade2 / (float)populacao2);

    resultadosuperpoder1 = populacao1 + area1 + pibcidade1 + pontosTuristicos1 + pib1 + (1 / densidadepop1);
    resultadosuperpoder2 = populacao2 + area2 + pibcidade2 + pontosTuristicos2 + pib2 + (1 / densidadepop2);
    superpoder = resultadosuperpoder1 > resultadosuperpoder2;

    //Exibindo os resultados
    printf("\n\n---- CARTA 1 ----\n\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %ld \n", populacao1);
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
    printf("PIB per capita: %.2f reais \n\n", pib2);

    //COMPARAÇÃO DE CARTAS 

    printf("\n\n ------COMPARAÇÃO DE CARTAS-----\n\n");

    resultadopopulacao = populacao1 > populacao2;
    printf("População: %d \n", resultadopopulacao);

    resultadoarea = area1 > area2;
    printf("Área: %d \n", resultadoarea);

    resultadopibcidade = pibcidade1 > pibcidade2;
    printf("PIB: %d \n", resultadopibcidade);

    resultadopontosturisticos = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos turísticos: %d \n", resultadopontosturisticos);

    resultadodensidade = densidadepop1 < densidadepop2;
    printf("Densidade populacional: %d \n", resultadodensidade);

    resultadopibpercapita = pib1 > pib2;
    printf("PIB per capita: %d \n", resultadopibpercapita);

    superpoder = resultadosuperpoder1 > resultadosuperpoder2;
    printf("SUPER PODER: %.2f \n", superpoder);

    return 0;
}