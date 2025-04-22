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
    float resultado1;
    float superPoderCarta1;
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
    float resultado2;
    float superPoderCarta2;

    char primeiroAtributo, segundoAtributo;

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

    // Menu Principal
    printf("*** Jogo de Comparação ***\n");
    printf("P. Poupulação\n");
    printf("A. Area\n");
    printf("B. PIB\n");
    printf("T. Ponto Turistico\n");
    printf("D. Densidade Demografica\n");
    printf("C. Pib PerCapita\n");
    printf("Escolha o primeiro Atributo: "); // aqui voce escolhe qual opção você quer para fazer a comparação
    scanf(" %c", &primeiroAtributo);

switch (primeiroAtributo) {
    case 'P':
    case 'p':
    printf("Você escolheu o Atributo População!\n");// O Nome do atributo escolhido
    printf("Carta 1: %s-(%s) População: %d\n", cidade, estado, populacao); // nome do atributo mais o valor da carta1
    printf("Carta 2: %s-(%s) População: %d\n", cidade2, estado2, populacao2); // nome do atributo mais o valor da carta2
    resultado1 = populacao > populacao2 ? 1 : 0;// Fazendo a comparação utilizando o ternario
break;
    case 'A':
    case 'a':
    printf("Você escolheu o Atributo Area!\n");
    printf("Carta 1: %s-(%s) Area: %f\n",cidade, estado, Area);
    printf("Carta 2: %s-(%s) Area: %f\n",cidade2, estado2, Area2);
    resultado1 = Area > Area2 ? 1 : 0;
break;
    case 'B':
    case 'b':
    printf("Você escolheu o Atributo PIB!\n");
    printf("Carta 1: %s-(%s) PIB: %f\n",cidade, estado, PIB);
    printf("Carta 2: %s-(%s) PIB: %f\n",cidade2, estado2, PIB2);
    resultado1 = PIB > PIB2 ? 1 : 0;
break;
    case 'T':
    case 't':
    printf("Você escolheu o Atributo Ponto Turistico!\n");
    printf("Carta 1: %s-(%s) Ponto Turistico: %d\n",cidade, estado, pontoTuristico);
    printf("Carta 2: %s-(%s) Ponto Turistico: %d\n",cidade2, estado2, pontoTuristico2);
    resultado1 = pontoTuristico > pontoTuristico2 ? 1 : 0;
break;
    case 'D':
    case 'd':
    printf("Você escolheu o Atributo Densidade Demografica!\n");
    printf("Carta 1: %s-(%s) Densidade Demográfica: %f\n",cidade, estado, DensidadePopulacional);
    printf("Carta 2: %s-(%s) Densidade Demográfica: %f\n",cidade2, estado2, DensidadePopulacional2);
    resultado1 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
break;
    case 'C':
    case 'c':
    printf("Você escolheu o Atributo PibPerCapita!\n");
    printf("Carta 1: %s-(%s) PIBPerCapita: %f\n",cidade, estado, PIBPerCapita);
    printf("Carta 2: %s-(%s) PIBPerCapita: %f\n",cidade2, estado2, PIBPerCapita2);
    resultado1 = PIBPerCapita > PIBPerCapita2 ? 1 : 0;
break;
    default:
    printf("Opção Invalida!\n");
break;
}

    printf("Escolha do Segundo Atributo\n");
    printf("Atenção: Não pode escolher o mesmo atributo do primeiro!\n"); // aqui não pode escolher o mesmo atributo do primeiro
    printf("P. Poupulação\n");
    printf("A. Area\n");
    printf("B. PIB\n");
    printf("T. Ponto Turistico\n");
    printf("D. Densidade Demografica\n");
    printf("C. Pib PerCapita\n");
    printf("Escolha o Segundo Atributo: ");
    scanf(" %c", &segundoAtributo);


if (primeiroAtributo == segundoAtributo) {
    printf("Escolhas dos Atributos são Iguais!\n");
} else {
    switch (segundoAtributo) {
        case 'P':
        case 'p':
        printf("Você escolheu o Atributo População!\n");
        printf("Carta 1: %s-(%s) População: %d\n", cidade, estado, populacao);
        printf("Carta 2: %s-(%s) População: %d\n", cidade2, estado2, populacao2);
        resultado2 = populacao > populacao2 ? 1 : 0;
    break;
        case 'A':
        case 'a':
        printf("Você escolheu o Atributo Area!\n");
        printf("Carta 1: %s-(%s) Area: %f\n",cidade, estado, Area);
        printf("Carta 2: %s-(%s) Area: %f\n",cidade2, estado2, Area2);
        resultado2 = Area > Area2 ? 1 : 0;
    break;
        case 'B':
        case 'b':
        printf("Você escolheu o Atributo PIB!\n");
        printf("Carta 1: %s-(%s) PIB: %f\n",cidade, estado, PIB);
        printf("Carta 2: %s-(%s) PIB: %f\n",cidade2, estado2, PIB2);
        resultado2 = PIB > PIB2 ? 1 : 0;
    break;
        case 'T':
        case 't':
        printf("Você escolheu o Atributo Ponto Turistico!\n");
        printf("Carta 1: %s-(%s) Ponto Turistico: %d\n",cidade, estado, pontoTuristico);
        printf("Carta 2: %s-(%s) Ponto Turistico: %d\n",cidade2, estado2, pontoTuristico2);
        resultado2 = pontoTuristico > pontoTuristico2 ? 1 : 0;
    break;
        case 'D':
        case 'd':
        printf("Você escolheu o Atributo Densidade Demografica!\n");
        printf("Carta 1: %s-(%s) Densidade Demográfica: %f\n",cidade, estado, DensidadePopulacional);
        printf("Carta 2: %s-(%s) Densidade Demográfica: %f\n",cidade2, estado2, DensidadePopulacional2);
        resultado2 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
    break;
        case 'C':
        case 'c':
        printf("Você escolheu o Atributo PibPerCapita!\n");
        printf("Carta 1: %s-(%s) PIBPerCapita: %f\n",cidade, estado, PIBPerCapita);
        printf("Carta 2: %s-(%s) PIBPerCapita: %f\n",cidade2, estado2, PIBPerCapita2);
        resultado2 = PIBPerCapita > PIBPerCapita2 ? 1 : 0;
    break;
        default:
        printf("Opção Invalida!\n");
    break;
    }
 }

    superPoderCarta1 = (float)populacao + Area + PIB + pontoTuristico + PIBPerCapita + (1 / DensidadePopulacional); // aqui é feito a soma de todos os atributos
    superPoderCarta2 = (float)populacao2 + Area2 + PIB2 + pontoTuristico2 + PIBPerCapita2 + (1 / DensidadePopulacional2);

 printf("Carta1 Soma dos Atributo: %.2f\n", superPoderCarta1); // aqui imprime os valores de todos os atributos somados
 printf("Carta2 Soma dos Atributo: %.2f\n", superPoderCarta2);
 if (superPoderCarta1 > superPoderCarta2) {
    printf("Carta1: Venceu!\n");
 } else if (superPoderCarta1 < superPoderCarta2) {
    printf("Carta2: Venceu!\n");
 } else {
    printf("*** EMPATOU ***\n");
 }
    return 0;
}