#include <stdio.h>

int main() {
    // Variáveis 
    char estado1, estado2;                  
    char codigoCarta1[5], codigoCarta2[5];  
    char nomeCidade1[50], nomeCidade2[50];  
    int populacao1, populacao2;             
    float area1, area2;                     
    float pib1, pib2;                       
    int pontosTuristicos1, pontosTuristicos2; 
    
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
    scanf(" %f", &pib1);

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
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos2);

    //Exibindo os resultados
    printf("\n\n---- CARTA 1 ----\n\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área em Km²: %.2f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);

    printf("\n\n---- CARTA 2 ---- \n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área em Km²: %.2f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}