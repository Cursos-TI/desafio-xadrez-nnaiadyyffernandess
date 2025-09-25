// Função recursiva para movimentar a TORRE
void moverTorre(int casas)
{
    if (casas <= 0) return;
    printf("Torre: 1 casa a direita\n");
    moverTorre(casas - 1);
}

// Função recursiva com loops aninhados para movimentar o BISPO
void moverBispo(int casas)
{
    if (casas <= 0) return;

    // loop externo → vertical
    for (int i = 1; i <= 1; i++)
    {
        // loop interno → horizontal
        for (int j = 1; j <= 1; j++)
        {
            printf("Bispo: 1 casa para cima e 1 casa para a direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Função recursiva para movimentar a RAINHA
void moverRainha(int casas)
{
    if (casas <= 0) return;

    printf("Rainha: 1 casa para a esquerda\n");

    moverRainha(casas - 1);
}

// Função para movimentar o CAVALO com loops aninhados complexos
        void moverCavalo()
        {

    // loop externo (for) representa o movimento completo
    for (int i = 1; i <= 1; i++)
    {
        int j = 1;

        // loop interno (while) percorre os 3 passos
        while (j <= 3)
        {
            if (j <= 2)
            {
                printf("Cavalo: 1 casa para cima\n");
            }
            else
            {
                printf("Cavalo: 1 casa para a direita\n");
            }

            // exemplo de controle de fluxo (poderia usar continue/break)
            if (j == 3) break;

            j++;
        }
    }
}

int main()
{
    printf("Movimentando a TORRE:\n");
    moverTorre(5);

    printf("\nMovimentando o BISPO:\n");
    moverBispo(5);

    printf("\nMovimentando a RAINHA:\n");
    moverRainha(8);

    printf("\nMovimentando o CAVALO:\n");
    moverCavalo();

    return 0;
}
