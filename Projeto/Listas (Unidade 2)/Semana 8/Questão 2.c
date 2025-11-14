//Questão sobre dias chuvosos
#include <stdio.h>
#include <string.h>

int main() {
    // Meses
    char meses[12][20] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    
    int chuva[12];

    // Le os 12 inteiros
    for (int i = 0; i < 12; i++) {
        scanf("%d", &chuva[i]);
    }

    // Ordena usando Selection Sort (ordem decrescente) 
    for (int i = 0; i < 11; i++) {
        // Encontra o índice do maior elemento restante
        int max_idx = i;
        for (int j = i + 1; j < 12; j++) {
            if (chuva[j] > chuva[max_idx]) {
                max_idx = j;
            }
        }

        // Troca os valores de chuva
        int temp_chuva = chuva[i];
        chuva[i] = chuva[max_idx];
        chuva[max_idx] = temp_chuva;

        // Troca os nomes dos meses para manter a correspondência
        char temp_mes[20];
        strcpy(temp_mes, meses[i]);
        strcpy(meses[i], meses[max_idx]);
        strcpy(meses[max_idx], temp_mes);
    }

    // Escrever o ranking ordenado 
    for (int i = 0; i < 12; i++) {
        printf("%s %d\n", meses[i], chuva[i]);
    }

    return 0;
}