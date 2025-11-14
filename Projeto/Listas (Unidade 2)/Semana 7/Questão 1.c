//Questão de campo minado 1D
#include <stdio.h>
#include <string.h>

int main() {
    char campo[21]; // 20 caracteres + terminador nulo
    int indice;

    // Le a palavra e o índice
    scanf("%s %d", campo, &indice);

    // Verifica se há bomba no índice
    if (campo[indice] == 'x') {
        printf("bum!\n"); 
    } else {
        // Conta as bombas adjacentes
        int bombas_adjacentes = 0;
        int len = strlen(campo);

        // Verifica à esquerda
        if (indice > 0 && campo[indice - 1] == 'x') {
            bombas_adjacentes++;
        }
        
        // Verifica à direita
        if (indice < (len - 1) && campo[indice + 1] == 'x') {
            bombas_adjacentes++;
        }

        printf("%d\n", bombas_adjacentes);
    }

    return 0;
}