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

    
    // movimentando o cavalo
    printf("\n Movimente o CAVALO: \n");

    // loop externo (for) representa o movimento completo do cavalo
    for (i=1; i<=1; i++) // apenas 1 movimento
    {
       int j = 1; // variável para o while

        // loop interno (while) percorre os 3 passos do movimento
        while (j <= 3)
        {
            if (j <= 2)
            {
                printf("Movimento %d: 1 casa para baixo\n", j);
            }
            else
            {
                printf("Movimento %d: 1 casa para a esquerda\n", j);
            }
            j++;
        }
    }


    return 0;
}
