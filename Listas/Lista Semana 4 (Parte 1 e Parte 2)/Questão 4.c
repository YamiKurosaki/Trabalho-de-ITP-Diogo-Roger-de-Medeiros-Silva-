#include <stdio.h>
#include <math.h>

int calcular_pontos(float distancia, int eh_bonus) {
    if (distancia <= 1.0) {
        return eh_bonus ? 5 : 10;

    } else if (distancia <= 2.0) {
        return eh_bonus ? 3 : 6;

    } else if (distancia <= 3.0) {
        return eh_bonus ? 2 : 4;

    } else {
        return 0;
    }
}

int main() {
    float x_atual, y_atual;
    float x_anterior, y_anterior;
    int pontuacao_TOT = 0;

    printf("Digite as coordenadas (x y) dos 10 lançamentos:\n");

    for (int i = 0; i < 10; i++) {
        printf("Lançamento %d: ", i + 1);
        scanf("%f %f", &x_atual, &y_atual);


        float dist_centro = sqrt(pow(x_atual - 0, 2) + pow(y_atual - 0, 2));
        pontuacao_TOT += calcular_pontos(dist_centro, 0);

        if (i > 0) {
            float dist_anterior = sqrt(pow(x_atual - x_anterior, 2) + pow(y_atual - y_anterior, 2));
            pontuacao_TOT += calcular_pontos(dist_anterior, 1);
        }

        x_anterior = x_atual;
        y_anterior = y_atual;
    }

    printf("\nA pontuação total final é: %d pontos.\n", pontuacao_TOT);

    return 0;
}