#include <stdio.h>

int main() {

    float consumo, valor_TOT;
    char tipo_residente;

    printf("Digite o consumo de energia em KWh: ");
    scanf("%f", &consumo);

    printf("Digite o tipo de consumidor/residente em que se encaixa (R, C ou I, em letra MAIÚSCULA): ");
    scanf(" %c", &tipo_residente);

    if (tipo_residente == 'R') {
        valor_TOT = (consumo * 0.60) + 15.00;
        printf("O valor total a ser pago em sua conta é: R$ %.2f\n", valor_TOT);

    } else if (tipo_residente == 'C') {
        valor_TOT = (consumo * 0.48) + 15.00;
        printf("O valor total a ser pago em sua conta é: R$ %.2f\n", valor_TOT);

    } else if (tipo_residente == 'I') {
        valor_TOT = (consumo * 1.29) + 15.00;
        printf("O valor total a ser pago em sua conta é: R$ %.2f\n", valor_TOT);
    } else {
        printf("Tipo de residente inválido. Por favor, insira R, C ou I.\n");
    }

}
