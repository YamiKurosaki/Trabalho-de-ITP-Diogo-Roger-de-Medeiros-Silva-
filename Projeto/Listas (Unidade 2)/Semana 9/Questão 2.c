//Questão Sugestão de Amigos
#include <stdio.h>

int main() {
    int M;
    // Le M (<= 100)
    scanf("%d", &M);

    int amigos[M][M];

    // Le a matriz de adjacência
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &amigos[i][j]);
        }
    }

    int x;
    // Le o usuário x
    scanf("%d", &x);

    // Itera por todos os usuários 'j' para ver se podem ser sugeridos
    for (int j = 0; j < M; j++) {
        if (x == j) continue; // Não pode sugerir a si mesmo

        // Condição 1: Não são amigos 
        if (amigos[x][j] == 0) {
            
            int amigo_comum = 0;
            // Condição 2: Procura um amigo em comum 'k' 
            for (int k = 0; k < M; k++) {
                // Se x é amigo de k E j é amigo de k
                if (amigos[x][k] == 1 && amigos[j][k] == 1) {
                    amigo_comum = 1;
                    break; // Encontrou um, não precisa procurar mais
                }
            }

            if (amigo_comum) {
                // Imprime a sugestão (o loop 'j' já garante a ordem crescente)
                printf("%d ", j);
            }
        }
    }
    printf("\n");

    return 0;
}