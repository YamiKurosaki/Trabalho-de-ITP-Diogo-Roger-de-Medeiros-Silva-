#include <stdio.h>
#include <stdlib.h> 

int main() {
    int rainha0, rainha1, rainha2, rainha3;
    int contador_solucoes = 0;

    printf("Buscando todas as soluções para o problema das 4 rainhas...\n");


    for (rainha0 = 0; rainha0 < 4; rainha0++) {
        for (rainha1 = 0; rainha1 < 4; rainha1++) {
            for (rainha2 = 0; rainha2 < 4; rainha2++) {
                for (rainha3 = 0; rainha3 < 4; rainha3++) {

                    int sem_conflito_de_linha = (rainha0 != rainha1 && rainha0 != rainha2 && rainha0 != rainha3 &&
                                                 rainha1 != rainha2 && rainha1 != rainha3 &&
                                                 rainha2 != rainha3);

                    int sem_conflito_de_diagonal = (abs(rainha0 - rainha1) != 1 &&  
                                                    abs(rainha0 - rainha2) != 2 &&  
                                                    abs(rainha0 - rainha3) != 3 &&  
                                                    abs(rainha1 - rainha2) != 1 &&
                                                    abs(rainha1 - rainha3) != 2 &&  
                                                    abs(rainha2 - rainha3) != 1); 

                    if (sem_conflito_de_linha && sem_conflito_de_diagonal) {
                        contador_solucoes++;
                        printf("O numero de solucoes é %d: Rainhas nas linhas [%d, %d, %d, %d] para as colunas [0, 1, 2, 3]\n",
                               contador_solucoes, rainha0, rainha1, rainha2, rainha3);
                    }
                }
            }
        }
    }
    printf("Encontradas %d soluções.\n", contador_solucoes);

    return 0;
}