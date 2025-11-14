//Questão competição de empates
#include <stdio.h>

int main() {
    int M;
    // Le M (<= 20)
    scanf("%d", &M);

    int resultados[M][M];
    
    // Le a matriz de resultados
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &resultados[i][j]);
        }
    }

    int empates = 0;

    // Verifica cada partida *uma única vez*
    // Itera apenas pela "metade" da matriz (triângulo superior)
    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j < M; j++) {
            // Partida i x j
            int gols_i = resultados[i][j];
            int gols_j = resultados[j][i];

            if (gols_i == gols_j) {
                empates++;
            }
        }
    }

    // Escreve o número total de empates 
    printf("%d\n", empates);

    return 0;
}