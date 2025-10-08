#include <stdio.h>
#define MAX_QUESTOES 20

int main() {
    int n;
    int gabarito[MAX_QUESTOES];
    int respostas_aluno[MAX_QUESTOES];
    int acertos = 0;

    printf("Digite o número de questões (até %d): ", MAX_QUESTOES);
    scanf("%d", &n);

    printf("Digite as %d respostas do gabarito (separadas por espaço): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &gabarito[i]);
    }

    printf("Digite as %d respostas do aluno (separadas por espaço): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &respostas_aluno[i]);
    }

    for (int i = 0; i < n; i++) {
    
        if (gabarito[i] == respostas_aluno[i]) {
            acertos++;
        }
    }

    if (acertos == 1) {
        printf("Resultado: %d acerto\n", acertos);
    } else {
        printf("Resultado: %d acertos\n", acertos);
    }

    return 0;
}