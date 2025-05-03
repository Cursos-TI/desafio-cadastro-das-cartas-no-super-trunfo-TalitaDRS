#include <stdio.h>

// Desafio Super Trunfo - Países - Novato
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Aluna talita Daniely Rodrigues da Silva

int main(){

    int populacao1, populacao2;
    int numpontosturisticos1, numpontosturisticos2;
    float area1, area2;
    float PIB1, PIB2;
    char codigo1, codigo2 [50];
    char estado1, estado2 [3];
    char cidade1, cidade2 [50];

//no código acima foram definidas as variáveis da carta, em que cada atributo foi separado conforme sugestão do comentário no trabalho. 
    printf("Carta 1: \n");
    
//o código acima imprime na tela a mensagem "Carta 1" e os códigos abaixo solicitam que o jogador insira os dados da sua carta 1.

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
    scanf("%s", &numpontosturisticos1);

    printf("Carta1 - DIgite o estado: %s \n", estado1);

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
    scanf("%s", &numpontosturisticos2);

    printf("Carta1 - DIgite o estado: %s \n", estado1);

    return 0;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
