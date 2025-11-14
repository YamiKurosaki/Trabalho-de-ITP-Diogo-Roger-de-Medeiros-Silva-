//Questão Campo agrícola
#include <stdio.h>

int main() {
    int M, N;
    // Le M e N (<= 10)
    scanf("%d %d", &M, &N);

    int campo[M][N];
    int irrigado[M][N]; // Matriz auxiliar

    // Inicializa a matriz auxiliar e lê o campo
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &campo[i][j]);
            irrigado[i][j] = 0; // 0 = não irrigado
        }
    }

    // Marcar os setores irrigados
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            // Se for um irrigador
            if (campo[i][j] == 2) {
                // Irrigadores nunca estão na borda 
                irrigado[i - 1][j] = 1; // Norte
                irrigado[i + 1][j] = 1; // Sul
                irrigado[i][j - 1] = 1; // Oeste
                irrigado[i][j + 1] = 1; // Leste 
            }
        }
    }

    int ferteis_irrigados = 0;
    int ferteis_n_irrigados = 0;

    // Contabiliza os setores férteis
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            // Se for fértil (1)
            if (campo[i][j] == 1) {
                if (irrigado[i][j] == 1) {
                    ferteis_irrigados++;
                } else {
                    ferteis_n_irrigados++;
                }
            }
        }
    }

    // Escreve a saída
    printf("%d %d\n", ferteis_irrigados, ferteis_n_irrigados);

    return 0;
}