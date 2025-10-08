#include <stdio.h>

int main() {

    int altura, peso, IMC;

printf("Digite seu peso em Kg: ");
scanf("%d", &peso);

printf("Digite sua altura em metros (m): ");
scanf("%d", &altura);

IMC = peso / (altura * altura);

printf("Seu IMC é: %d\n", IMC);
printf("Classificação: ");

if (IMC < 18.5) {
    printf("Está abaixo do peso\n");
} else if (IMC >= 18.5 && IMC < 24.9) {
    printf("Está com peso normal\n");
} else if (IMC >= 25 && IMC < 29.9) {
    printf("Está com sobrepeso\n");
} else {
    printf("Está com obesidade\n");
}

    return 0;
}