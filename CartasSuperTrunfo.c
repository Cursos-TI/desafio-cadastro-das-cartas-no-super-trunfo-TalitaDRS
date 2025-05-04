#include <stdio.h>

int main(){
    int populacao1, populacao2, numpontosturisticos1, numpontosturisticos2;
    float area1, area2, PIB1, PIB2;
    char codigo1[5], codigo2[5], estado1[3], estado2[3], cidade1[50], cidade2[50];

    printf("Carta 1: \n");
    

    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área Km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos1);

    printf("Carta 2: \n");
    
    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos2);

    printf("Atributos da carta 1:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, numpontosturisticos1);
    printf("Atributos da carta 2:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, numpontosturisticos2);

    return 0;
}
