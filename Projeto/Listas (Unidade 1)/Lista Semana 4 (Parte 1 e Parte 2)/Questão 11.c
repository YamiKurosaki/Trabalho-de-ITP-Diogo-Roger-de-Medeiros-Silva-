#include <stdio.h>


int eh_primo(int numero) {
    if (numero <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;

    do {
        printf("Digite dois inteiros a e b em que \"a\" precisa ser > \"b\": ");
        scanf("%d %d", &a, &b);

        if (a <= b) {
            printf("Entrada inválida! 'a' deve ser maior que 'b'.\n");
        }
    } while (a <= b);

    printf("\nNúmeros primos no intervalo [%d, %d]:\n", b, a);

    for (int i = b; i <= a; i++) {

        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}