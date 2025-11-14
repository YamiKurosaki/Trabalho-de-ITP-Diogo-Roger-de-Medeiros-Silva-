// Questão sobre viagem barata
#include <stdio.h>

int main() {
    int M, X, Z;
    
    // Le M (<= 10)
    scanf("%d", &M);

    int precos[M][M];

    // Le a matriz de preços
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &precos[i][j]);
        }
    }

    // Le X (origem) e Z (destino)
    scanf("%d %d", &X, &Z);

    // Custo direto (X -> Z)
    int melhor_custo = precos[X][Z];
    int cidade_intermediaria = -1; // -1 indica rota direta

    // Verifica as rotas com uma escala entre as cidades (X -> Y -> Z)
    for (int Y = 0; Y < M; Y++) {
        // A cidade intermediária não pode ser a origem nem o destino
        if (Y == X || Y == Z) {
            continue;
        }

        int custo_escala = precos[X][Y] + precos[Y][Z];

        // Verifica se a rota com escala é mais barata
        if (custo_escala < melhor_custo) {
            melhor_custo = custo_escala;
            cidade_intermediaria = Y;
        }
    }

    // Imprime o resultado
    if (cidade_intermediaria == -1) {
        // Rota em que a melhor opção é a viagem direta
        printf("%d-%d R$%d\n", X, Z, melhor_custo);
    } else {
        // Rota em que a melhor opção é com escala
        printf("%d-%d-%d R$%d\n", X, cidade_intermediaria, Z, melhor_custo);
    }

    return 0;
}
