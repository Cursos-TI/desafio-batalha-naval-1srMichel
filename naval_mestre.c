#include <stdio.h>

int main(){
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiroMestre[10][10] = {0};

    printf("    ");
    for(int i = 0; i < 10; i++){
        printf(" %c", coluna[i]);
    }
    printf("\n");

    //loop que vai fazer os desenhos
    for(int i = 0; i < 10; i++){
        
        for(int j = 0; j < 10; j++){
            //desenho do cone
            if(i < 3){ //limite vertical do desenho do cone
                int ponta = 2; //coordenada horizontal da ponta do cone
                if(j >= ponta - i && j <= ponta + i){ //cresce 1 quadro pintado pra direita e 1 pra esquerda a cada coluna
                    tabuleiroMestre[i][j] = 1;
                }
            }
            //desenho do octaedro
            if(i >= 6 && i <= 8){ //coordenada vertical de onde vai ficar o octaeddro no tabuleiro
                int ponta = 1; //coordenada horizontal da ponta do octaedro
                int centro = 7; //coordenada vertical do centro do octaedro
               
                    if(j == ponta){
                        tabuleiroMestre[i][j] = 1;
                        if(i == centro){
                            tabuleiroMestre[i][j - 1] = 1;
                            tabuleiroMestre[i][j + 1] = 1;
                        }

                }
            }

            //desenho da cruz
            if(i >= 3 && i <= 7){ //localização vertical do desenho da cruz
                int centro = 5; //centro da cruz
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

    //loop que vai apenas imprimir o tabuleiro na tela
    for(int i = 0; i < 10; i++){
        printf("%d || ", i + 1);
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiroMestre[i][j]);
        }

        printf("\n");
    }
    
    return 0;

}