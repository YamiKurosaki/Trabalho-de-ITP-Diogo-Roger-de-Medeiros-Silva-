#include <stdio.h>

int main() {

    float peso, altura, imc;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    
    printf("Seu IMC: %.2f\n", imc);

    return 0;
}