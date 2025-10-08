#include <stdio.h>
#include <math.h>

double altura_terreno(double x, double y) {
    return sin(cos(y) + x) + cos(y + sin(x));
}

int eh_ponto_seguro(double x, double y) {
    // Array com os deslocamentos para os 5 pontos de verificação
    double dx[] = {0, 0.2, -0.2, 0.2, -0.2};
    double dy[] = {0, 0.2, -0.2, -0.2, 0.2};

    for (int i = 0; i < 5; i++) {
        float h = altura_terreno(x + dx[i], y + dy[i]);

        if (h < 0 || h > 2) {
            return 0; 
        }
    }
   
    return 1; 
}

int main() {
    double x_pouso, y_pouso;

    printf("Digite a coordenada de pouso da sonda (x y): ");
    scanf("%lf %lf", &x_pouso, &y_pouso);

    if (!eh_ponto_seguro(x_pouso, y_pouso)) {
        printf("Troque de coordenada\n");

    } else {
        int vizinhos_seguros = 0;
        
        if (eh_ponto_seguro(x_pouso + 2, y_pouso)) vizinhos_seguros++;
        if (eh_ponto_seguro(x_pouso - 2, y_pouso)) vizinhos_seguros++;
        if (eh_ponto_seguro(x_pouso, y_pouso + 2)) vizinhos_seguros++;
        if (eh_ponto_seguro(x_pouso, y_pouso - 2)) vizinhos_seguros++;

        if (vizinhos_seguros <= 1) {
            printf("Aqui é inseguro/perigoso\n");
        } else if (vizinhos_seguros <= 3) {
            printf("Aqui é relativamente seguro\n");
        } else { 
            printf("Aqui é seguro\n");
        }
    }
    return 0;
}