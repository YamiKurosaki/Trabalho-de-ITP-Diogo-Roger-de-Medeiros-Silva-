#include <stdio.h>

#define MAX_TERRENO 30

int main() {
    int n;
    int terreno[MAX_TERRENO];
    int altura_max = 0;
    int indice_pico_1 = -1, indice_pico_2 = -1;

    printf("Digite o número de segmentos do terreno (n): ");
    scanf("%d", &n);

    printf("Digite as %d alturas do terreno: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &terreno[i]);
    }

    for (int i = 0; i < n; i++) {
        if (terreno[i] > altura_max) {
            altura_max = terreno[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (terreno[i] == altura_max) {
            if (indice_pico_1 == -1) {
                indice_pico_1 = i;
            } else {
                indice_pico_2 = i;
            }
        }
    }

    int comprimento_ponte = indice_pico_2 - indice_pico_1 - 1;

    printf("O comprimento da ponte é: %d\n", comprimento_ponte);

    return 0;
}