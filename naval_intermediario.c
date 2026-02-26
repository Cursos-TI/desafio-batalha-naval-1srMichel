#include <stdio.h>

int main(){
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("### TABULEIRO COM ALGUNS BARCOS DIAGONAIS ### \n \n");

    int tabuleiroAventureiro[10][10] = {0};
    tabuleiroAventureiro[3][0] = 3;
    tabuleiroAventureiro[4][0] = 3;
    tabuleiroAventureiro[5][0] = 3;

    tabuleiroAventureiro[3][6] = 3;
    tabuleiroAventureiro[3][7] = 3;
    tabuleiroAventureiro[3][8] = 3;

    tabuleiroAventureiro[7][1] = 3;
    tabuleiroAventureiro[8][2] = 3;
    tabuleiroAventureiro[9][3] = 3;

    tabuleiroAventureiro[8][7] = 3;
    tabuleiroAventureiro[7][8] = 3;
    tabuleiroAventureiro[6][9] = 3;

    printf("    ");
    for(int i = 0; i < 10; i++){
        printf(" %c", coluna[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d || ", i + 1);

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiroAventureiro[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    printf("### TABULEIRO COM DIAGONAIS PREENCHIDAS ###");
    printf("\n");

    int tabuleiroDiagonal[10][10] = {0};

     printf("    ");
    for(int i = 0; i < 10; i++){
        printf(" %c", coluna[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 10; j++){
            if(i == j || i + j == 9){ // i == j (diagonal da direita para esquerda), i + j == 9 (diagonal da esquerda para direita)
                tabuleiroDiagonal[i][j] = 3;
            }
        }

    }

    for(int i = 0; i < 10; i++){
        printf("%d || ", i + 1);

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiroDiagonal[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}