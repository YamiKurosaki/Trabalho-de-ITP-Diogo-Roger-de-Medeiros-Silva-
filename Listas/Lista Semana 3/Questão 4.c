#include <stdio.h>

int main() {
    char jogador1, jogador2;

    printf("Jogador 1, digite sua jogada (P, A ou T, em letras maiúsculas): ");
    scanf(" %c", &jogador1);

    printf("Jogador 2, digite sua jogada (P, A ou T, em letras maiúsculas): ");
    scanf(" %c", &jogador2);

    printf("Resultado da Partida\n");

    if (jogador1 == jogador2) {
        printf("Empate!\n");
    }

    else if ((jogador1 == 'P' && jogador2 == 'T') ||
             (jogador1 == 'T' && jogador2 == 'A') ||
             (jogador1 == 'A' && jogador2 == 'P')) { 
        printf("O Jogador 1 venceu. Parabéns!\n");
    }

    else {
        printf("O Jogador 2 venceu. Parabéns!\n");
    }

    return 0;
}