#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao01, populacao02, n_turistas01, n_turistas02;
    char estado01[50], estado02[50], cod01[20], cod02[20], nome_cidade01[50], nome_cidade02[50];
    float area01, area02, pib01, pib02;
 
    printf("Digite o ESTADO da primeira carta: ");
    scanf("%s", &estado01);
 
    printf("Digite o CÓDIGO da primeira carta: ");
    scanf("%s", &cod01);
 
    printf("Digite o NOME DA CIDADE da primeira carta: ");
    scanf("%s", &nome_cidade01);
 
    printf("Digite a POPULAÇAO da primeira carta: ");
    scanf("%d", &populacao01);
 
    printf("Digite a AREA da primeira carta: ");
    scanf("%f", &area01);
 
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib01);
 
    printf("Digite o NUMERO DE PONTOS TURISTICOS da primeira carta: ");
    scanf("%d", &n_turistas01);
 
    // ---------------------------------------------------
 
    printf("\n\nDigite o ESTADO da segunda carta: ");
    scanf("%s", &estado02);
 
    printf("Digite o CÓDIGO da segunda carta: ");
    scanf("%s", &cod02);
 
    printf("Digite o NOME DA CIDADE da segunda carta: ");
    scanf("%s", &nome_cidade02);
 
    printf("Digite a POPULAÇAO da segunda carta: ");
    scanf("%d", &populacao02);
 
    printf("Digite a AREA da segunda carta: ");
    scanf("%f", &area02);
 
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib02);
 
    printf("Digite o NUMERO DE PONTOS TURISTICOS da segunda carta: ");
    scanf("%d", &n_turistas02);
 
    // ---------------------------------------------------
 
    printf("\n\n******************************************\n\n");
 
    printf("Carta 1:\n");
    printf("Estado: %s \n", estado01);
    printf("Código: %s \n", cod01);
    printf("Nome da Cidade: %s \n", nome_cidade01);
    printf("População: %d \n", populacao01);
    printf("Área: %.2f km2 \n", area01);
    printf("PIB: %.2f bilhões de reais \n", pib01);
    printf("Número de Pontos Turísticos: %d \n", n_turistas01);
 
    printf("\n\n");
 
    printf("Carta 2:\n");
    printf("Estado: %s \n", estado02);
    printf("Código: %s \n", cod02);
    printf("Nome da Cidade: %s \n", nome_cidade02);
    printf("População: %d \n", populacao02);
    printf("Área: %.2f km2 \n", area02);
    printf("PIB: %.2f bilhões de reais \n", pib02);
    printf("Número de Pontos Turísticos: %d \n", n_turistas02);

    return 0;
}
