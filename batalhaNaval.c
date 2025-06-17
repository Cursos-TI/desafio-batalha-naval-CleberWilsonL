#include <stdio.h>

// =======================
// NÍVEL NOVATO
// =======================
void nivelNovato() {
    printf("=== NÍVEL NOVATO ===\n");

    // Posicionamento dos dois navios
    // Um na vertical (3 espaços) e outro na horizontal (4 espaços)
    
    // Coordenadas do navio vertical (começa em X=2, Y=3)
    int navioVerticalX = 2;
    int navioVerticalY = 3;

    // Coordenadas do navio horizontal (começa em X=5, Y=1)
    int navioHorizontalX = 5;
    int navioHorizontalY = 1;

    printf("Navio Vertical:\n");
    printf("(%d, %d)\n", navioVerticalX, navioVerticalY);
    printf("(%d, %d)\n", navioVerticalX + 1, navioVerticalY);
    printf("(%d, %d)\n", navioVerticalX + 2, navioVerticalY);

    printf("Navio Horizontal:\n");
    printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY);
    printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + 1);
    printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + 2);
    printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + 3);

    printf("\n");
}

// =======================
// NÍVEL AVENTUREIRO
// =======================
void nivelAventureiro() {
    printf("=== NÍVEL AVENTUREIRO ===\n");

    int tabuleiro[10][10] = {0};

    // Navio horizontal de tamanho 3
    for (int i = 0; i < 3; i++)
        tabuleiro[1][i] = 3;

    // Navio vertical de tamanho 4
    for (int i = 0; i < 4; i++)
        tabuleiro[i][5] = 3;

    // Navio diagonal ( ↘ ) de tamanho 3
    for (int i = 0; i < 3; i++)
        tabuleiro[6 + i][6 + i] = 3;

    // Navio diagonal ( ↙ ) de tamanho 3
    for (int i = 0; i < 3; i++)
        tabuleiro[2 + i][6 - i] = 3;

    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

// =======================
// NÍVEL MESTRE
// =======================
void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void nivelMestre() {
    printf("=== NÍVEL MESTRE ===\n");

    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Habilidade: Cone (pirâmide invertida)
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++)
        cone[2][j] = 1;

    // Habilidade: Cruz
    cruz[0][2] = cruz[1][2] = cruz[2][2] = 1;
    cruz[2][0] = cruz[2][1] = cruz[2][3] = cruz[2][4] = 1;

    // Habilidade: Octaedro
    octaedro[0][2] = octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("Habilidade: Cone\n");
    imprimirMatriz(cone);

    printf("Habilidade: Cruz\n");
    imprimirMatriz(cruz);

    printf("Habilidade: Octaedro\n");
    imprimirMatriz(octaedro);
}

// =======================
// FUNÇÃO PRINCIPAL
// =======================
int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    return 0;
}
