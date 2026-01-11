#include <stdio.h>

int main() {
    // Aumentamos um pouco os tamanhos para segurança (incluindo o \0 final)
    char estado[3]; 
    char codigoDaCarta[5]; 
    char nomeDaCidade[50];
    int populacao = 0;
    float area = 0;
    float PIB = 0;
    int pontosTuristicos = 0;

    printf("\n--- Dados da Carta 1 ---\n");

    printf("Estado (Ex: SP): ");
    // Mudado para %s para aceitar 2 letras. O [2] limita a leitura para não estourar o array.
    scanf("%2s", estado); 

    printf("Código da carta (Ex: A01): ");
    scanf("%4s", codigoDaCarta);

    printf("Nome Da Cidade: ");
    // O %[^\n] faz o scanf ler TUDO até que o usuário aperte ENTER (aceita espaços)
    scanf(" %[^\n]", nomeDaCidade); 

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Dados da Carta 1 ---\n");    
    printf("Estado: %s\nCódigo da carta: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f reais\nPontos Turisticos: %d\n",
           estado, codigoDaCarta, nomeDaCidade, populacao, area, PIB, pontosTuristicos);

    return 0;
}
