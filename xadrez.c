#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Nível Novato - Movimentação das Peças

     //declarando as variáveis
    int movimentacao=1, i;

    //movimentando a torre
    printf("Movimente a TORRE: \n");

    while (movimentacao<=5)
    {
        printf("Movendo-se a direita (%d x)\n", movimentacao);
        movimentacao++;

    }

    // movimentando o bispo
    printf("\n Movimente o BISPO: \n");
    movimentacao=1;

    do
    {
        printf("1 casa para cima, 1 casa para a direita \n");
        movimentacao++;
    }
    while (movimentacao<=5);


// movimentando a rainha
    movimentacao=1;

    printf("\n Movimente a rainha \n");

    for (i=1; i<=8; i++)
    {
        printf("1 casa para a esquerda (%d x) \n", i);

    }



    return 0;
}
