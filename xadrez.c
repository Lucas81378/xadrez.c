#include <stdio.h>

int main() {
    int torre = 1, bispo = 1, rainha;

    printf("MOVIMENTAÇÃO DA TORRE\n");
    while (torre <= 5) {
        printf("A torre se move para a direita: passo %d\n", torre);
        torre++;
    }

    printf("\nMOVIMENTAÇÃO DO BISPO\n");
    do {
        printf("O bispo se move na diagonal direita-cima: passo %d\n", bispo);
        bispo++;
    } while (bispo <= 5);

    printf("\nMOVIMENTAÇÃO DA RAINHA\n");
    for (rainha = 1; rainha <= 7; rainha++) {
        if (rainha % 2 == 0)
            printf("A rainha se move para a esquerda: passo %d\n", rainha);
        else
            printf("A rainha se move para cima: passo %d\n", rainha);
    }

    return 0;
}