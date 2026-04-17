#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    const int mov_torre = 5;
    const int mov_bispo = 5;
    const int mov_rainha = 8;

    //Movimento da torre utilizano FOR para mover 5 casas para a direita
    printf("movimento da torre:\n");
    for(int i = 1; i <= mov_torre; i++){
        printf("Direita\n");

    }
    printf("\n");

    //Movimento do bispo utilizando WHILE para mover 5 casas na diagonal
    printf("movimento do bispo:\n");
    int bispo_mov = 1;
    while(bispo_mov <= mov_bispo){
        printf("cima, direita\n");
        bispo_mov++;
    }
    printf("\n");

    //Movimento da rainha utilizando DO-WHILE para mover 8 casas em qualquer direção
    printf("movimento da rainha:\n");
    int rainha_mov =1;
    do{
        printf("esquerda, baixo\n");
        rainha_mov++;
    }while(rainha_mov <= mov_rainha);
    printf("\n");

    return 0;
}
