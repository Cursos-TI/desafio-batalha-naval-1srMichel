#include <stdio.h>

int main(){
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[11][11] = {0};

    tabuleiro[3][0] = 3;
    tabuleiro[4][0] = 3;
    tabuleiro[5][0] = 3;

    tabuleiro[3][6] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[3][8] = 3;

    //para colocar as letras que representam as colunas do tabuleiro
    printf("    ");
    for(int i = 0; i < 10; i++){
        printf(" %c", coluna[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d || ", i + 1); //conta corretamente de 1 até 10 os números que representam as linhas do tabuleiro

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }
    
    return 0;
}