#include <stdio.h>
#include <math.h> 

int main() {
    float coordenada_x_aranha, coordenada_y_aranha, teia_max;
    int numero_alvos;
    int sucesso_total = 1;

    printf("Digite a coordenada inicial do homem aranha (x y): ");
    scanf("%f %f", &coordenada_x_aranha, &coordenada_y_aranha);

    printf("Digite o comprimento máximo da teia: ");
    scanf("%f", &teia_max);

    printf("Digite a quantidade de alvos: ");
    scanf("%d", &numero_alvos);

    for (int i = 0; i < numero_alvos; i++) {
        float coordenada_x_alvo, coordenada_y_alvo;
        
        printf("Digite a coordenada do alvo %d (x y): ", i + 1);
        scanf("%f %f", &coordenada_x_alvo, &coordenada_y_alvo);

        float distancia = sqrt(pow(coordenada_x_alvo - coordenada_x_aranha, 2) + pow(coordenada_y_alvo - coordenada_y_aranha, 2));

        if (distancia > teia_max) {
            sucesso_total = 0; 
           
            break;
        } else {
            coordenada_x_aranha = (2 * coordenada_x_alvo) - coordenada_x_aranha;

        }
    }

    if (sucesso_total) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}