#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES_POR_ESTADO 4

typedef struct {
    char codigo[4];
    char nome[50];
    double populacao;
    double area;
    double pib;
    int numero_de_pontos_turisticos;
    int Cidade[50];

}