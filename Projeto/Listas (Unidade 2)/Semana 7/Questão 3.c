//Questão sobre falta de um aluno
#include <stdio.h>
#include <string.h>

int main() {
    char aluno_alvo[11]; // 10 caracteres + terminador nulo
    char linha_frequencia[1002]; // 1000 + \n + terminador nulo

    // Pega o nome do aluno 
    scanf("%s", aluno_alvo);

    // Consome o espaço/newline restante
    fgetc(stdin); 

    // Pega a string de frequências (linha inteira) 
    fgets(linha_frequencia, 1002, stdin);

    int total_aulas = 0;
    int presencas = 0;

    // Usa strtok para "quebrar" a string pelos espaços
    char *token = strtok(linha_frequencia, " \n");

    while (token != NULL) {
        // Verifica se é uma data (DD/MM)
        if (strlen(token) == 5 && token[2] == '/') {
            total_aulas++;
        }
        // Verifica se é o aluno alvo
        else if (strcmp(token, aluno_alvo) == 0) {
            presencas++;
        }
        
        // Pega o próximo "token"
        token = strtok(NULL, " \n");
    }

    // Escrever o número de ausências 
    int ausencias = total_aulas - presencas;
    printf("%d\n", ausencias);

    return 0;
}