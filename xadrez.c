#include <stdio.h>

// ==========================
// Funções recursivas
// ==========================

// --- TORRE (Recursiva) ---
// Move-se em linha reta (5 casas para a direita)
void moverTorre(int casas_restantes) {
    if (casas_restantes == 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas_restantes - 1);  // Chamada recursiva
}

// --- BISPO (Recursiva + Loops Aninhados) ---
// Move-se na diagonal (5 casas para cima e à direita)
void moverBispo(int casas_restantes) {
    if (casas_restantes == 0) return; // Condição de parada

    // Loop externo: movimento vertical (Cima)
    for (int i = 1; i <= 1; i++) {  // apenas 1 passo por chamada
        // Loop interno: movimento horizontal (Direita)
        for (int j = 1; j <= 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas_restantes - 1); // Chamada recursiva
}

// --- RAINHA (Recursiva) ---
// Move-se em linha reta (8 casas para a esquerda)
void moverRainha(int casas_restantes) {
    if (casas_restantes == 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1); // Chamada recursiva
}

// ==========================
// CAVALO (Loops complexos)
// ==========================
// Movimento em "L": 2 casas para cima e 1 para direita
void moverCavalo() {
    int movimentos_cima = 2;
    int movimentos_direita = 1;

    printf("\nMovimento do CAVALO:\n");

    // Loop externo: movimento vertical
    for (int i = 1; i <= movimentos_cima; i++) {
        if (i == 2) {
            // Exemplo de uso de continue:
            // (pular mensagem extra quando chegar no segundo passo)
            continue;
        }
        printf("Cima\n");
    }

    // Loop interno: movimento horizontal
    int j = 1;
    while (j <= movimentos_direita) {
        if (j > 1) break; // Exemplo de uso de break
        printf("Direita\n");
        j++;
    }

    // Obs: Movimento total = Cima, Cima, Direita
}

// ==========================
// Função principal
// ==========================
int main() {
    printf("Movimento da TORRE:\n");
    moverTorre(5);

    printf("\nMovimento do BISPO:\n");
    moverBispo(5);

    printf("\nMovimento da RAINHA:\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}
