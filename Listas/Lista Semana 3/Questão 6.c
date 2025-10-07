#include <stdio.h>

int main() {
    
    char febre, dor_cabeca, dor_corpo, tosse;

    printf("Por favor, responda às seguintes perguntas com S (sim) ou N (não), em letras maiúsculas.\n");

    printf("Tem febre? (S/N): ");
    scanf(" %c", &febre);

    printf("Tem dor de cabeça? (S/N): ");
    scanf(" %c", &dor_cabeca);

    printf("Tem dor no corpo? (S/N): ");
    scanf(" %c", &dor_corpo);

    printf("Tem tosse? (S/N): ");
    scanf(" %c", &tosse);

    printf("Sugestão médica:\n");

    if (febre == 'S' && dor_cabeca == 'S' && dor_corpo == 'S') {
        printf("Possível gripe\n");

    } else if (febre == 'S' && tosse == 'S') {
        printf("Possível resfriado\n");

    } else if (dor_cabeca == 'S' && febre == 'N' && dor_corpo == 'N' && tosse == 'N') {
        printf("Possível enxaqueca\n");

    } else if (febre == 'S' && dor_cabeca == 'N' && dor_corpo == 'N' && tosse == 'N') {
        printf("Consulte um médico\n");

    } else if (febre == 'N' && dor_cabeca == 'N' && dor_corpo == 'N' && tosse == 'N') {
        printf("Você parece estar bem\n");
    } else {

        printf("Consulte um médico para avaliação\n");
    }

    return 0;
}