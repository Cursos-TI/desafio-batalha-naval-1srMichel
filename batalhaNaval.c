#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[11][11] = {0};

    tabuleiro[3][0] = 3;
    tabuleiro[4][0] = 3;
    tabuleiro[5][0] = 3;

    tabuleiro[3][6] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[3][8] = 3;

    printf("    ");
    for(int i = 0; i < 10; i++){
        printf(" %c", coluna[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%d || ", i + 1);

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    printf("\n");
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
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
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int tabuleiroMestre[10][10] = {0};

    printf("    ");
    for(int i = 0; i < 10; i++){
        printf(" %c", coluna[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 10; i++){
        
        for(int j = 0; j < 10; j++){
            if(i < 3){ 
                int ponta = 2; 
                if(j >= ponta - i && j <= ponta + i){ 
                    tabuleiroMestre[i][j] = 1;
                }
            }

            if(i >= 6 && i <= 8){  
                int ponta = 1; 
                int centro = 7; 
               
                    if(j == ponta){
                        tabuleiroMestre[i][j] = 1;
                        if(i == centro){
                            tabuleiroMestre[i][j - 1] = 1;
                            tabuleiroMestre[i][j + 1] = 1;
                        }

                }
            }

            if(i >= 3 && i <= 7){ 
                int centro = 5; 
                if(j == 6){
                    tabuleiroMestre[i][j] = 1;
                }
                if(i == centro){
                    if(j >= 4 && j <= 8){
                        tabuleiroMestre[i][j] = 1;
                    }
                }
            }
        }
        
    }

    for(int i = 0; i < 10; i++){
        printf("%d || ", i + 1);
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiroMestre[i][j]);
        }

        printf("\n");
    }
    
    return 0;
}
