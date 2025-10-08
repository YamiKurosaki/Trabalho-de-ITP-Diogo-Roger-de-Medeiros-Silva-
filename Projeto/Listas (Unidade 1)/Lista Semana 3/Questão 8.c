#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os três lados do triângulo, separados por espaço: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("\nOs valores podem formar um triângulo.\n");

        printf("  - Quanto aos lados: ");
        if (a == b && b == c) {
            printf("Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Isósceles\n");
        } else {
            printf("Escaleno\n");
        }

        float maior_lado, lado2, lado3;
        if (a >= b && a >= c) {
            maior_lado = a;
            lado2 = b;
            lado3 = c;

        } else if (b >= a && b >= c) {
            maior_lado = b;
            lado2 = a;
            lado3 = c;
            
        } else {
            maior_lado = c;
            lado2 = a;
            lado3 = b;
        }


        float maior_quadrado = maior_lado * maior_lado;
        float soma_quadrados = (lado2 * lado2) + (lado3 * lado3);

        printf("  - Quanto aos ângulos: ");
        if (maior_quadrado == soma_quadrados) {
            printf("Retângulo\n");

        } else if (maior_quadrado > soma_quadrados) {
            printf("Obtusângulo\n");

        } else {
            printf("Acutângulo\n");
        }

    } else {
        printf("Os valores fornecidos não podem formar um triângulo.\n");
    }

    return 0;
}