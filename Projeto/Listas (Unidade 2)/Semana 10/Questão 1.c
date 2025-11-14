//Questão sobre Soma de Vetores

#include <stdio.h>
#include <stdlib.h>

// Função para alocar um vetor de inteiros
int* alocarVetor(int n) {
    int *vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }
    return vetor;
}

// Função para somar os dois vetores
int* somaVetores(int *u, int *v, int n) {
    int *SOMA = alocarVetor(n);
    for (int i = 0; i < n; i++) {
        SOMA[i] = u[i] + v[i];
    }
    return SOMA;
}

int main() {
    int n1, n2;
    // le n1 e n2 
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("dimensoes incompativeis\n");
    } else {
        // Aloca os vetores u e v
        int *u = alocarVetor(n1);
        int *v = alocarVetor(n2);

        // Le elementos de u e v 
        for (int i = 0; i < n1; i++) {
            scanf("%d", &u[i]);
        }
        for (int i = 0; i < n2; i++) {
            scanf("%d", &v[i]);
        }

        // Chama a função de soma dos vetores
        int *resultado = somaVetores(u, v, n1);

        // Escreve o vetor resultante 
        for (int i = 0; i < n1; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");

        // Libera a memória alocada
        free(u);
        free(v);
        free(resultado);
    }

    return 0;
}