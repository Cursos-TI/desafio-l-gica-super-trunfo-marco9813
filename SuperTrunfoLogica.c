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

    int opcao;

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
    printf("*** MENU PRINCIPAL ***\n");
    printf("1. Nomes das Cidades!\n");
    printf("2. Comparação da População!\n");
    printf("3. Comparação da Area!\n");
    printf("4. Comparação do PIB!\n");
    printf("5. Comparação do Ponto Turistico!\n");
    printf("6. Comparação da Densidade Demográfica!\n");
    printf("Escolha Uma Opção: ");
    scanf("%d", &opcao);

switch (opcao) {
    case 1:
    printf("Cidades: Carta 1: %s (%s) - Carta 2: %s (%s)\n", cidade, estado, cidade2, estado2);
break;
    case 2:
    printf("*** Comparação da População ***\n");
    printf("Carta 1: %s-(%s) População: %d\n", cidade, estado, populacao);
    printf("Carta 2: %s-(%s) População: %d\n", cidade2, estado2, populacao2);
    if (populacao > populacao2) {
        printf("### Carta 1, Vençeu ###\n");
    } else if (populacao < populacao2) {
        printf("### Carta 2, Vençeu ###\n");
    } else {
        printf("### EMPATE ###\n");
    }
break;
    case 3:
    printf("*** Comparação da Area ***\n");
    printf("Carta 1: %s-(%s) Area: %f\n",cidade, estado, Area);
    printf("Carta 2: %s-(%s) Area: %f\n",cidade2, estado2, Area2);
    if (Area > Area2) {
        printf("### Carta 1, Vençeu ###\n");
    } else if (Area < Area2) {
        printf("### Carta 2, Vençeu ###\n");
    } else {
        printf("### EMPATE ###\n");
    }
break;
    case 4:
    printf("*** Comparação do PIB ***\n");
    printf("Carta 1: %s-(%s) PIB: %f\n",cidade, estado, PIB);
    printf("Carta 2: %s-(%s) PIB: %f\n",cidade2, estado2, PIB2);
    if (PIB > PIB2) {
        printf("### Carta 1, Vençeu ###\n");
    } else if (PIB < PIB2) {
        printf("### Carta 2, Vençeu ###\n");
    } else {
        printf("### EMPATE ###\n");
    }
break;
    case 5:
    printf("*** Comparação de Ponto Turistico ***\n");
    printf("Carta 1: %s-(%s) Ponto Turistico: %d\n",cidade, estado, pontoTuristico);
    printf("Carta 2: %s-(%s) Ponto Turistico: %d\n",cidade2, estado2, pontoTuristico2);
    if (pontoTuristico > pontoTuristico2) {
        printf("### Carta 1, Venceu ###\n");
    } else if (pontoTuristico < pontoTuristico2) {
        printf("### Carta 2, Vençeu ###\n");
    } else {
        printf("### EMPATE ###\n");
    }
break;
    case 6:
    printf("*** Comparação Densidade Demográfica ***\n");
    printf("Carta 1: %s-(%s) Densidade Demográfica: %f\n",cidade, estado, DensidadePopulacional);
    printf("Carta 2: %s-(%s) Densidade Demográfica: %f\n",cidade2, estado2, DensidadePopulacional2);
    if (DensidadePopulacional < DensidadePopulacional2) {
        printf("### Carta 1, Venceu ###\n");
    } else if (DensidadePopulacional > DensidadePopulacional2) {
        printf("### Carta 2, Vençeu ###\n");
    } else {
        printf("### EMPATE ###\n");
    }
break;
    default:
    printf("Opção Invalida!\n");
}

    return 0;
}