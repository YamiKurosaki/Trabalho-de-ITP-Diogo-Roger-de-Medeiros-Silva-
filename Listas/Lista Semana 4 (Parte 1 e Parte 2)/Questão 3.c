#include <stdio.h>
#include <stdlib.h> 

int soma_divisores_proprios(int num) {
    int soma = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        
        if (num % i == 0) {
            soma = soma + i;
        }
    }
    return soma;
}

int main() {
    int num_a, num_b;

    printf("Digite dois números inteiros diferentes: ");
    scanf("%d %d", &num_a, &num_b);

    int soma_div_a = soma_divisores_proprios(num_a);
    int soma_div_b = soma_divisores_proprios(num_b);

    if (abs(soma_div_a - num_b) <= 2 && abs(soma_div_b - num_a) <= 2) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}