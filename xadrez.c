#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

static void movimentoTorre(int repeticoes);
static void movimentoBispo(int repeticoes);
static void movimentoRainha(int repeticoes);

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // const int TORRE_MOVIMENTO = 5, BISPO_MOVIMENTO = 5, RAINHA_MOVIMENTO = 8;
    // int torre = 0, bispo = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // do {
    //     printf("Cima, Direita\n");
    // } while (++bispo < BISPO_MOVIMENTO);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // while (torre++ <  TORRE_MOVIMENTO)
    //     printf("Direita\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // for (int rainha = 0; rainha < RAINHA_MOVIMENTO; ++rainha)
    //     printf("Esquerda\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // printf("\n");
    // for (int cavalo = 0; cavalo < 1; ++cavalo) {
    //     while (cavalo++ < 2) {
    //         printf("Baixo, ");
    //     }
    //     printf("Esquerda\n");
    // }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    const int repeticao_torre = 5, repeticao_bispo = 5, repeticao_rainha = 8, repeticao_cavalo_externa = 3, repeticao_cavalo_interna = 2; 

    movimentoTorre(repeticao_torre);
    printf("\n");
    movimentoBispo(repeticao_bispo);
    printf("\n");
    movimentoRainha(repeticao_rainha);
    printf("\n");
    for (int cavalo = 0; cavalo < repeticao_cavalo_externa && 1 == 1; ++cavalo) {
        while (cavalo++ < repeticao_cavalo_interna && (0 == 0 || 1 != 0))
            printf("Cima, ");
        printf("Direita\n");
    }

    return 0;
}

static void movimentoTorre(int repeticoes) {
    if (repeticoes == 0) {
        return;
    }

    movimentoTorre(repeticoes - 1);
    printf("Direita\n");
}

static void movimentoBispo(int repeticoes) {
    if (repeticoes == 0) {
        return;
    }

    movimentoBispo(repeticoes - 1);
    for (int externo = 0; externo < 1; ++externo) {
        printf("Cima, ");
        for (int interno = 0; interno < 1; ++interno)
            printf("Direita\n");
    }
}

static void movimentoRainha(int repeticoes) {
    if (repeticoes == 0) {
        return;
    }

    printf("Esquerda\n");
    movimentoRainha(repeticoes - 1);
}