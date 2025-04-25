#include <stdio.h>

int main() {

    
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação

    printf("----MOVIMENTAÇÃO DA TORRE----\n");
    int i =1;
    while(i <= 5) {
        printf("Torre: Direita\n");
        i++;
    }

    printf("----MOVIMENTAÇÃO DO BISPO----\n");
    int j = 1;
    do {
        printf("Bispo: Direita\n"); 
        printf("Bispo: Cima\n");
        j++;
    } while (j <= 5);

    printf("----MOVIMENTAÇÃO DA RAINHA---\n");

    for (int k = 1; k <= 8; k++) {
    printf("Rainha: Esquerda\n");
}

    return 0;
}