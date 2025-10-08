#include <stdio.h>

#define MAX_FIGU 1001

int main() {
    int m;
    int n;
    int listagem_album[MAX_FIGU];

    printf("Digite o total de figurinhas do álbum (m) e quantas você tem (n): ");
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++) {
        listagem_album[i] = 0;
    }

    printf("Digite os números das %d figurinhas que você possui: ", n);
    for (int i = 0; i < n; i++) {
        int figurinha_possuida;
        scanf("%d", &figurinha_possuida);
        listagem_album[figurinha_possuida] = 1;
    }

    printf("\nFigurinhas faltando:\n");
    for (int i = 1; i <= m; i++) {
        if (listagem_album[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}