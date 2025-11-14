//Questão sobre sorte ou azar
#include <stdio.h>

int main() {
    int m, n;
    // Pega m (sorteados) e n (aposta)
    scanf("%d %d", &m, &n);

    int sorteados[m];
    int aposta[n];

    // Lê os m números sorteados 
    for (int i = 0; i < m; i++) {
        scanf("%d", &sorteados[i]);
    }

    // Lê os n números da aposta 
    for (int i = 0; i < n; i++) {
        scanf("%d", &aposta[i]);
    }

    int acertos = 0;

    // Usa repetições aninhadas para comparação
    for (int i = 0; i < n; i++) { // número da aposta
        for (int j = 0; j < m; j++) { // número sorteado
            if (aposta[i] == sorteados[j]) {
                acertos++;
                break; // Assume que não há números repetidos no sorteio
            }
        }
    }

    // Escreve a quantidade de acertos 
    printf("%d\n", acertos);

    return 0;
}
