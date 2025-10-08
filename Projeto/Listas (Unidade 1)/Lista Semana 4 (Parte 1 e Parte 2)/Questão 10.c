#include <stdio.h>

int main() {
    int a, b, c;
    int contador = 0;

    printf("Buscando todos os trios pitagóricos onde c < 1000...\n\n");

    for (c = 1; c < 1000; c++) {
        for (b = 1; b < c; b++) {
            for (a = 1; a < b; a++) {
                if ((a * a) + (b * b) == (c * c)) {

                    printf("Trio encontrado: (%d, %d, %d)\n", a, b, c);
                    
                    contador++;
                }
            }
        }
    }

    printf("Busca finalizada. Total de %d trios encontrados.\n", contador);

    return 0;
}