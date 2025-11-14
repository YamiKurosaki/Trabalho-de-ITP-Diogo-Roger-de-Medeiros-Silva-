#include <stdio.h>

int eh_primo(int num) {

    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Buscando trios de primos na forma (x, x+2, x+6) até 50000:\n");

    
    for (int x = 1; x <= 50000; x++) {
        if (eh_primo(x) && eh_primo(x + 2) && eh_primo(x + 6)) {
            
            printf("(%d, %d, %d)\n", x, x + 2, x + 6);
        }
    }
    
    return 0;
}