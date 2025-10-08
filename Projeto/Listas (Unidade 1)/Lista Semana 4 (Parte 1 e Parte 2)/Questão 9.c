#include <stdio.h>

int main() {
    int n;
    int contador_numero = 1;

    printf("Digite o número de linhas do padrão: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", contador_numero);
            contador_numero++;
        }
        printf("\n");
    }

    return 0;
}