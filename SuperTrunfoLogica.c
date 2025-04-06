#include <stdio.h>

int main() {
    // CARTA 1
    char estado[30];
    char codigoCarta[30];
    char cidade[30];
    int populacao;
    float Area;
    float PIB;
    int pontoTuristico;
    float DensidadePopulacional;
    float PIBPerCapita;
    // CARTA 2
    char estado2[30];
    char codigoCarta2[30];
    char cidade2[30];
    int populacao2;
    float Area2;
    float PIB2;
    int pontoTuristico2;
    float DensidadePopulacional2;
    float PIBPerCapita2;

        // CARTA 1
    printf("Digite o Estado: \n");
    scanf("%s", estado);
    printf("Digite o Código da carta: \n");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao);
    printf("Digite o tamanho da Area: \n");
    scanf("%f", &Area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite o Numero de Ponto Turistico: \n");
    scanf("%d", &pontoTuristico);

    // CARTA 2

    printf("Digite outro Estado: \n");
    scanf("%s", estado2);
    printf("Digite outro Código da carta: \n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", cidade2);
    printf("Digite outro numero da população: \n");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da Area da Carta 2: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &PIB2);
    printf("Digite o Numero de Ponto Turistico da Carta 2: \n");
    scanf("%d", &pontoTuristico2);
        // CARTA 1
    DensidadePopulacional = populacao / Area;
    PIBPerCapita = PIB / populacao;

        // CARTA 2
    DensidadePopulacional2 = populacao2 / Area2;
    PIBPerCapita2 = PIB2 / populacao;

    printf("Carta 1: %s-(%s): %.2f\n", cidade, estado, Area);
    printf("Carta 2: %s-(%s): %.2f\n", cidade2, estado2, Area2);

    if (Area > Area2) {
        printf("Carta 1: %s Venceu!\n", cidade);
    } else {
        printf("Carta 2: %s Venceu!\n", cidade2);
    }

    return 0;
}