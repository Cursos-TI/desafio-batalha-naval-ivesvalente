#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Representa o tabuleiro: 10x10 inicializado com 0 (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Representa os navios
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};

    // Posiciona o navio horizontalmente
    int linha_horizontal = 2; // Escolha a linha inicial
    int coluna_inicial_horizontal = 1; // Escolha a coluna inicial

    if (coluna_inicial_horizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        printf("Posicionando navio horizontal nas coordenadas:\n");
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_horizontal][coluna_inicial_horizontal + i] = navio_horizontal[i];
            printf("(%d, %d) ", linha_horizontal, coluna_inicial_horizontal + i);
        }
        printf("\n");
    } else {
        printf("Erro ao posicionar navio horizontal: Fora dos limites do tabuleiro.\n");
    }

    // Posiciona o navio verticalmente
    int linha_inicial_vertical = 5; // Escolha a linha inicial
    int coluna_vertical = 7; // Escolha a coluna

    if (linha_inicial_vertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        printf("Posicionando navio vertical nas coordenadas:\n");
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_inicial_vertical + i][coluna_vertical] = navio_vertical[i];
            printf("(%d, %d) ", linha_inicial_vertical + i, coluna_vertical);
        }
        printf("\n");
    } else {
        printf("Erro ao posicionar navio vertical: Fora dos limites do tabuleiro.\n");
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}