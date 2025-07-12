#include <stdio.h>

// Definindo constantes para movimentação
#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

// Função recursiva para mover o bispo (diagonal para cima à direita)
void moverBispoRecursivo(int passo) {
    if (passo >= PASSOS_BISPO) return;

    printf("Diagonal Superior Direita (Passo %d)\n", passo + 1);
    moverBispoRecursivo(passo + 1);
}

// Função recursiva para mover a torre (direita)
void moverTorreRecursiva(int passo) {
    if (passo >= PASSOS_TORRE) return;

    printf("Direita (Passo %d)\n", passo + 1);
    moverTorreRecursiva(passo + 1);
}

// Função recursiva para mover a rainha (esquerda)
void moverRainhaRecursiva(int passo) {
    if (passo >= PASSOS_RAINHA) return;

    printf("Esquerda (Passo %d)\n", passo + 1);
    moverRainhaRecursiva(passo + 1);
}

// Nível Aventureiro: movimentação do cavalo em L (baixo + esquerda), com loops aninhados
void moverCavaloLoop() {
    printf("\nMovimento do Cavalo (L - Baixo e Esquerda):\n");

    for (int i = 0; i < 2; i++) {  // 2 movimentos verticais
        printf("Baixo\n");

        int j = 0;
        while (j < 1) {  // 1 movimento horizontal
            printf("Esquerda\n");
            j++;
        }
    }
}

// Nível Mestre: Cavalo em L para cima e direita, com múltiplas variáveis e break/continue
void moverCavaloMestre() {
    printf("\nMovimento do Cavalo (L - Cima e Direita):\n");

    for (int i = 0, j = 0; i < 2 || j < 1; i++, j++) {

        if (i == 1) continue; // Pular o segundo passo para cima propositalmente (exemplo de uso do 'continue')

        if (i < 2) {
            printf("Cima\n");
        }

        if (j < 1) {
            printf("Direita\n");
        }

        if (i >= 2 && j >= 1) break;
    }
}

// Função principal
int main() {
    // NÍVEL NOVATO
    printf("=== NÍVEL NOVATO ===\n");

    // Movimentação do Bispo usando recursão
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(0);

    // Movimentação da Torre usando recursão
    printf("\nMovimento da Torre:\n");
    moverTorreRecursiva(0);

    // Movimentação da Rainha usando recursão
    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursiva(0);

    // NÍVEL AVENTUREIRO
    printf("\n=== NÍVEL AVENTUREIRO ===\n");
    moverCavaloLoop();

    // NÍVEL MESTRE
    printf("\n=== NÍVEL MESTRE ===\n");
    moverCavaloMestre();

    return 0;
}
