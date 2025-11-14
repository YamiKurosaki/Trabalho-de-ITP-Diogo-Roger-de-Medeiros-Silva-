//Questão piloto, tipo ayrton Senna
#include <stdio.h>

int main() {
    int n;
    // Analisa a quantidade de pilotos
    scanf("%d", &n);

    int largada[n];
    int chegada[n];
    
    // Arrays para guardar a *posição* de cada piloto 
    // +1 para facilitar o acesso pelo ID (não utilizaremos o indice 0)
    int pos_largada[n + 1];
    int pos_chegada[n + 1];

    //Ordem de largada 
    for (int i = 0; i < n; i++) {
        scanf("%d", &largada[i]);
        //Posição (i) com base no ID do piloto
        pos_largada[largada[i]] = i; 
    }

    //Ordem de chegada 
    for (int i = 0; i < n; i++) {
        scanf("%d", &chegada[i]);
        //Posição (i) com base no ID do piloto
        pos_chegada[chegada[i]] = i;
    }

    int max_ganho = 0;
    int piloto_vencedor = -1;
    int empate = 0;

    // Calcula o ganho para cada piloto (ID de 1 a n) 
    for (int piloto_id = 1; piloto_id <= n; piloto_id++) {
        // Ganho = Posição de Largada - Posição de Chegada
        int ganho = pos_largada[piloto_id] - pos_chegada[piloto_id];

        if (ganho > max_ganho) {
            max_ganho = ganho;
            piloto_vencedor = piloto_id;
            empate = 0; // Reseta o empate
        } else if (ganho == max_ganho && max_ganho > 0) {
            empate = 1;
        }
    }

    //Resultado
    if (max_ganho == 0 || empate == 1) {
        printf("empate\n");
    } else {
        printf("%d\n", piloto_vencedor);
    }

    return 0;
}