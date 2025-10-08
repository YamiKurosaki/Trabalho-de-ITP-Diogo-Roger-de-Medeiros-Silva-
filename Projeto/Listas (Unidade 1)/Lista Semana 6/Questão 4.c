#include <stdio.h>
#define NUM_ILHAS 10

int main() {
    int mapa[NUM_ILHAS];

    int num_ilhas_visitadas[NUM_ILHAS];
    int ilha_atual = 0;

    printf("Digite os 10 valores do mapa do tesouro: ");
    for (int i = 0; i < NUM_ILHAS; i++) {
        scanf("%d", &mapa[i]);
    }

    for (int i = 0; i < NUM_ILHAS; i++) {
        num_ilhas_visitadas[i] = 0;
    }
    
    while (1) {
        if (num_ilhas_visitadas[ilha_atual] == 1) {

            printf("A primeira ilha visitada pela segunda vez é: %d\n", ilha_atual);
            break; 
        }

        num_ilhas_visitadas[ilha_atual] = 1;

        ilha_atual = mapa[ilha_atual];
    }

    return 0;
}