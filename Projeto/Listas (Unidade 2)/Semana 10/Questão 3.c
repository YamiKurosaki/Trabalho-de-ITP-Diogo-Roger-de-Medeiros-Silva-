//Questão Sopa de Letrinhas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para ler as strings com espaços
void lerString(char *str, int max_len) {
    fgets(str, max_len, stdin);

    str[strcspn(str, "\n")] = '\0';
}


char* mexer(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2;

    // Aloca memória para a nova string
    char *mexida = (char*) malloc((totalLen + 1) * sizeof(char));
    if (mexida == NULL) {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }

    int i = 0, j = 0, k = 0;

    // Alterna as letras enquanto ambas as strings têm caracteres
    while (i < len1 && j < len2) {
        mexida[k++] = str1[i++];
        mexida[k++] = str2[j++];
    }

    // Verifica e adiciona o restante da str1 
    while (i < len1) {
        mexida[k++] = str1[i++];
    }

    // Verifica e adiciona o restante da str2
    while (j < len2) {
        mexida[k++] = str2[j++];
    }

    // Adiciona o terminador nulo
    mexida[k] = '\0';
    return mexida;
}

int main() {
    char str1[101]; // 100 caracteres + terminador nulo
    char str2[101];

    // Le as duas strings (uma por linha)
    lerString(str1, 101);
    lerString(str2, 101);

    // Chama a função mexer
    char *resultado = mexer(str1, str2);

    // Escreve o resultado
    printf("%s\n", resultado);

    // Libera a memória alocada
    free(resultado);

    return 0;
}