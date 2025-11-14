//Questão sobre Ocorrências em um vetor
#include <stdio.h>
#include <stdlib.h>

// Função para buscar todas as ocorrências de um valor em um vetor
int* buscaNoVetor(int *v, int n, int valor, int *qtd) {
    // Conta as ocorrências
    *qtd = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            (*qtd)++;
        }
    }

    // Se não encontrou, retorna para NULL 
    if (*qtd == 0) {
        return NULL;
    }

    // Aloca o vetor de índices 
    int *indices = (int*) malloc((*qtd) * sizeof(int));
    if (indices == NULL) {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }

    // Preenche o vetor de índices
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            indices[j] = i;
            j++;
        }
    }

    return indices;
}


int main() {
    int n;
    // Le a quantidade de elementos do vetor
    scanf("%d", &n);

    // Aloca o vetor
    int *vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    // Le os n inteiros
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Le o valor a ser buscado 
    int valor_buscado;
    scanf("%d", &valor_buscado);

    int quantd_ocorrencias = 0;
    
    // Obtem os índices
    int *indices = buscaNoVetor(vetor, n, valor_buscado, &quantd_ocorrencias);

    // Escreve a saída 
    if (indices == NULL) {
        printf("Nenhuma ocorrencia\n");
    } else {
        printf("%d\n", quantd_ocorrencias);
        for (int i = 0; i < quantd_ocorrencias; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
        
        // Libera o vetor de índices
        free(indices);
    }

    // Libera o vetor
    free(vetor);

    return 0;
}