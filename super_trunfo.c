#include <stdio.h>

float mediaDENSIDADE(float populacao, float area){
    return populacao / area;
}

float mediaPIB(float pib, float populacao){
    return pib / populacao;
}

int main(){
    char var_estado_a[2], var_estado_b[2];
    char cod_carta_a[4], cod_carta_b[4];
    char cidade_a[50], cidade_b[50];
    int populacao_a, populacao_b, turisticos_num_a, turisticos_num_b;
    float area_km_a, area_km_b, pib_a, pib_b;
    float media_densidade_a, media_densidade_b;
    float media_pib_a, media_pib_b;

    printf("Seja bem-vindo(a) ao SUPER TRUNFO, digite os dados da sua primeira carta: \n");

    printf("Digite o estado representando de A-H: ");
    scanf("%s", &var_estado_a);

    printf(" Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &cod_carta_a);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade_a);

    printf("Digite a população: ");
    scanf("%d", &populacao_a);

    printf("Digite a Área: ");
    scanf("%f", &area_km_a);

    printf("Digite o Pib: ");
    scanf("%f", &pib_a);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &turisticos_num_a);

    // TERMINADA A DIGITAÇÃO DA PRIMEIRA CARTA.

    printf("Estamos quase lá, agora digite os dados da sua segunda carta: \n");

    printf("Digite o estado representando de A-H: ");
    scanf("%s", &var_estado_b);

    printf(" Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &cod_carta_b);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade_b);

    printf("Digite a população: ");
    scanf("%d", &populacao_b);

    printf("Digite a Área: ");
    scanf("%f", &area_km_b);

    printf("Digite o Pib: ");
    scanf("%f", &pib_b);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &turisticos_num_b);

    // CALCULO DA DENSIDADE
    media_densidade_a = mediaDENSIDADE(populacao_a,area_km_a);
    media_densidade_b = mediaDENSIDADE(populacao_b,area_km_b);

    //CALCULO DO PIB PER CAPITA
    media_pib_a = mediaPIB(pib_a,populacao_a);
    media_pib_b = mediaPIB(pib_b, populacao_b);

    // APRESENTAÇÃO DOS RESULTADOS

    printf("Carta 1: \n");
    printf("Estado: %s\n", var_estado_a);
    printf("Código: %s\n", cod_carta_a);
    printf("Nome da Cidade: %s\n", cidade_a);
    printf("População: %d\n", populacao_a);
    printf("Área: %.2f km²\n", area_km_a);
    printf("PIB: %f bilhões de reais\n", pib_a);
    printf("Número de Pontos Turisticos: %d\n", turisticos_num_a);
    printf("Densidade populacional: %.f km²\n", media_densidade_a);
    printf("PIB per Capita: %.2f\n", media_pib_a);

    // Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", var_estado_b);
    printf("Código: %s\n", cod_carta_b);
    printf("Nome da Cidade: %s\n", cidade_b);
    printf("População: %d\n", populacao_b);
    printf("Área: %.2f km²\n", area_km_b);
    printf("PIB: %f bilhões de reais\n", pib_b);
    printf("Número de Pontos Turisticos: %d\n", turisticos_num_b);
    printf("Densidade populacional: %.f km²\n", media_densidade_b);
    printf("PIB per Capita: %.2f\n", media_pib_b);

    return 0;
}