#include <stdio.h>

    // Fução recursiva da Torre
    void moverTorre(int casas){
        if (casas > 0){
            printf("Direita \n");
            moverTorre(casas - 1);
        }
    }

    // Fução recursiva do Bispo
    void moverBispo(int casas){
        if (casas > 0){
            printf("Cima, Direita \n");
            moverBispo(casas - 1);
        }
    }
    // Fução recursiva da Rainha
    void moverRainha(int casas){
        if (casas > 0){
            printf("Esquerda \n");
            moverRainha(casas - 1);
        }
    }

    int main () {
        
        int cavalo = 1;

        // Mover a torre 5 casas para a direita
        printf("### TORRE ### \n");
        moverTorre(5);
        
        // Mover o bispo 5 casas na diagonal para cima e à direita 
        printf("### BISPO ### \n");
        moverBispo(5);
        
        // Mover a rainha oito casas para a esquerda
        printf("### RAINHA ### \n");
        moverRainha(8);
     
        // Mover o cavalo duas casas para baixo e uma para a esquerda
        printf("### CAVALO ### \n");
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Baixo \n");  // Imprime "baixo" duas vezes
            }
            printf("Esquerda \n"); // Imprime "esquerda" uma vez
        }
        
        return 0;
    }