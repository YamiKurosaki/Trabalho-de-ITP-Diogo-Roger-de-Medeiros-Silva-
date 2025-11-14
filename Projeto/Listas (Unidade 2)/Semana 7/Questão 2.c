//Questão sobre detecção de placas de veículos
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se é letra Maiúscula
int ehLetra(char c) {
    return (c >= 'A' && c <= 'Z');
}

// Função para verificar se é Algarismo
int ehDigito(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char placa[11]; // 10 caracteres + terminador nulo
    scanf("%s", placa);

    int len = strlen(placa);
    
    // Verifica o padrão Brasileiro (LLL-AAAA)
    if (len == 8 &&
        ehLetra(placa[0]) && ehLetra(placa[1]) && ehLetra(placa[2]) &&
        placa[3] == '-' &&
        ehDigito(placa[4]) && ehDigito(placa[5]) && ehDigito(placa[6]) && ehDigito(placa[7])) 
    {
        printf("brasileiro\n");
    }
    // Verifica o padrão Mercosul (LLLALAA)
    else if (len == 7 &&
             ehLetra(placa[0]) && ehLetra(placa[1]) && ehLetra(placa[2]) &&
             ehDigito(placa[3]) &&
             ehLetra(placa[4]) &&
             ehDigito(placa[5]) && ehDigito(placa[6])) 
    {
        printf("mercosul\n");
    }
    // Caso contrário
    else {
        printf("invalido\n");
    }

    return 0;
}