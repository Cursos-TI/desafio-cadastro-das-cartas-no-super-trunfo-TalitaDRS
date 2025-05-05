#include <stdio.h>

int main(){
    
    //declaração das variáveis das cartas 1 e 2
    int populacao1, populacao2; //int para declarar variáveis inteiras
    int numpontosturisticos1, numpontosturisticos2; 
    float area1, area2; //float para números com pontos flutuantes
    float pib1, pib2; 
    char codigo1[4], codigo2[4], estado1[3], estado2[3], cidade1[50], cidade2[50]; //char para variável de caracteres

    printf("SUPER TRUNFO \n"); //imprime a msg "SUPER TRUNFO" na tela

    printf("Carta 1: \n"); //imprime a msg "Carta 1" na tela
    
    printf("Digite o estado: \n"); //solicita que o usuário digite os atributos da carta 1
    scanf("%s", &estado1); //lê o que foi digitado pelo usuário, o %s é o especificador de formato para a string que é o tipo de variável do estado

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1); //lê o que foi digitado pelo usuário, o %d é o especificador de formato para o tipo de variável de inteiro na forma decimal

    printf("Digite a Área Km²: \n");
    scanf("%f", &area1); //lê o que foi digitado pelo usuário, o %d é o especificador de formato para o tipo de variável de ponto flutuante

    printf("Digite o PIB: \n"); 
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos1);

    printf("Carta 2: \n"); //imprime a msg "Carta 1" na tela
    
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
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos2);

    printf("Vamos aos resultados \n");
    printf("Atributos da carta 1:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, numpontosturisticos1); //imprime na tela os atributos da carta 1 de todas variáveis dela
    printf("Atributos da carta 2:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, numpontosturisticos2); //imprime na tela os atributos da carta 1 de todas variáveis dela

    return 0;
}
