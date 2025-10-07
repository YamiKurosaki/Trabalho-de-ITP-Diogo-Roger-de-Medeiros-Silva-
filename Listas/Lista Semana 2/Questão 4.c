#include <stdio.h>

int main() {

    int numero1, numero2;

    printf("Digite o primeiro número (precisa ser inteiro): ");
    scanf("%d", &numero1);

    printf("Digite o segundo número (precisa ser inteiro): ");
    scanf("%d", &numero2);

    printf("\n Resultado: \n");

    int soma = numero1 + numero2;
    printf("A soma entre os números é: %d\n", soma);

    int diferenca = numero1 - numero2;
    printf("A diferença entre os números é: %d\n", diferenca);

    int produto = numero1 * numero2;
    printf("O produto entre os números é: %d\n", produto);

    float divisao_real = (float)numero1 / numero2;
    printf("A divisão real entre os números é: %.2f\n", divisao_real);

    int resto = numero1 % numero2;
    printf("O resto da divisão é: %d\n", resto);

    float media = (float)(numero1 + numero2) / 2.0;
    printf("A média entre os números é: %.2f\n", media);

    return 0;
}