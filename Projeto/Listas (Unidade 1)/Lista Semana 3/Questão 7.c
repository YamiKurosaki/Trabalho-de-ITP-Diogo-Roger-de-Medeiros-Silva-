#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C, Delta, X1, X2;

    printf("Calculadora de Equação do 2º Grau (forma ax² + bx + c = 0)\n");
    printf("Digite o coeficiente 'A': ");
    scanf("%lf", &A);

    printf("Digite o coeficiente 'B': ");
    scanf("%lf", &B);

    printf("Digite o coeficiente 'C': ");
    scanf("%lf", &C);

    if (A == 0) {
        printf("\nErro: Isso não é uma equação do segundo grau, pois o coeficiente 'A' é zero.\n");
    } else {

        Delta = (B * B) - (4 * A * C);

        if (Delta < 0) {
            printf("\nDelta = %.2lf\n", Delta);
            printf("A equação não possui raízes reais.\n");

        } else if (Delta == 0) {
            printf("\nDelta = 0\n");
            X1 = -B / (2 * A);
            printf("A equação possui uma raiz real: x = %.2lf\n", X1);

        } else { 
            printf("\nDelta = %.2lf\n", Delta);
            X1 = (-B + sqrt(Delta)) / (2 * A);
            X2 = (-B - sqrt(Delta)) / (2 * A);

            printf("A equação possui duas raízes reais distintas:\n");

            printf("x1 = %.2lf\n", X1);
            printf("x2 = %.2lf\n", X2);
        }
    }

    return 0;
}