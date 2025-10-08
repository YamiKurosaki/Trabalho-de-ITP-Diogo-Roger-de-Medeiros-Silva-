#include <stdio.h>

int main() {
    float valor_compra, valor_desconto, valor_final;
    int percentual_aplic = 0;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    if (valor_compra > 100.00) {
        percentual_aplic = 10;
    } else if (valor_compra > 500.00) {
        percentual_aplic = 15;
    } else if (valor_compra > 1000.00) {
        percentual_aplic = 20;
    }

    valor_desconto = valor_compra * (percentual_aplic / 100.0);

    valor_final = valor_compra - valor_desconto;

    printf("Resumo da Compra\n");
    printf("Percentual de desconto: %d%%\n", percentual_aplic);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Valor final a pagar: R$ %.2f\n", valor_final);

    return 0;
}