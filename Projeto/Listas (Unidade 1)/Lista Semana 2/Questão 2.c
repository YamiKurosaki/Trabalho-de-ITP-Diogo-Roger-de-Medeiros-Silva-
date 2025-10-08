#include <stdio.h>

int main() {

    float Celsius, Fahrenheit, Kelvin;

    printf("Digite a temperatura em celsius (C): ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9/5) + 32;
    Kelvin = Celsius + 273.15;

    printf(" A temperatura convertida em Fahrenheit (F) é: %.1f\n", Fahrenheit);
    printf(" A temperatura convertida em Kelvin (K) é: %.1f\n", Kelvin);

    return 0;
}