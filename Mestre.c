#include <stdio.h>

// Desafio de Xadrez - MateCheck - Mestre - Movimento - do - Cavalo
int main()
{
    const int mov_cavalo = 8;// Número de movimentos possíveis para o cavalo
    const int passos_por_movimento = 3;// Número de passos em cada movimento do cavalo
    // Matriz que representa os movimentos do cavalo no xadrez
    const char *movimentos_cavalo[8][3] = {
        {"Baixo", "Baixo", "Direita"},
        {"Baixo", "Baixo", "Esquerda"},
        {"Cima", "Cima", "Direita"},
        {"Cima", "Cima", "Esquerda"},
        {"Direita", "Direita", "Baixo"},
        {"Direita", "Direita", "Cima"},
        {"Esquerda", "Esquerda", "Baixo"},
        {"Esquerda", "Esquerda", "Cima"}};

    printf("Movimento do cavalo:\n");// Imprime os movimentos do cavalo
    for (int i = 0; i < mov_cavalo; i++)// Itera sobre cada movimento do cavalo
    {
        for (int j = 0; j < passos_por_movimento; j++)// Itera sobre cada passo em um movimento do cavalo
        {
            printf("%s", movimentos_cavalo[i][j]);// Imprime o passo atual do movimento do cavalo
            if (j < passos_por_movimento - 1)// Verifica se não é o último passo para adicionar uma vírgula
            {
                printf(", ");// Imprime uma vírgula e um espaço entre os passos, exceto após o último passo
            }
        }
        printf("\n");// Imprime uma nova linha após cada movimento do cavalo
    }
    printf("\n");// Imprime uma nova linha após listar todos os movimentos do cavalo
    return 0;
}
