#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES_POR_ESTADO 4

int main(){

    int pais, estado, cidade;
    float codigo[3];
    char nome[50];
    double populacao;
    double area;
    double pib;
    int numero_de_pontos_turisticos;

    printf("Cadastro de cartas: \n");

    printf("Digite o Pais, Estado e Cidade: \n");
    scanf("%d %d %d", &pais, &estado, &cidade);

    printf("Digite o codigo: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &codigo[i]);
    }

    return 0;
}
