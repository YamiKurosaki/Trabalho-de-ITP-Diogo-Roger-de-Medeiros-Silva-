#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 10
#define QTD_PALAVRAS 4

// Estrutura para armazenar informações de cada palavra
typedef struct {
    char palavra[20];
    char dica[100];
    int linha;
    int coluna;
    char direcao; // 'H' = Horizontal, 'V' = Vertical
    int preenchida; // 0 = não, 1 = sim
} PalavraInfo;

// Preenchimento inicial do tabuleiro
void inicializarTabuleiro(char tab[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tab[i][j] = '.'; // ponto representa espaço vazio
        }
    }
}

// Exibição do tabuleiro
void mostrarTabuleiro(char tab[TAMANHO][TAMANHO]) {
    printf("\n   ");
    for (int i = 0; i < TAMANHO; i++) printf("%d ", i);
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d  ", i);
        for (int j = 0; j < TAMANHO; j++) {
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }
}

// Coloca uma palavra no tabuleiro
void preencherPalavra(char tab[TAMANHO][TAMANHO], PalavraInfo p) {
    for (int i = 0; i < (int)strlen(p.palavra); i++) {
        if (p.direcao == 'H')
            tab[p.linha][p.coluna + i] = p.palavra[i];
        else
            tab[p.linha + i][p.coluna] = p.palavra[i];
    }
}

// Deixa as letras em maiúsculas para facilitar a análise
void stringMaiuscula(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}

int main() {
    char tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);

    // Lista de palavras da cruzadinha
    PalavraInfo lista[QTD_PALAVRAS] = {
        {"CASA",  "Lugar onde as pessoas moram.",                2, 1, 'H', 0},
        {"PLATAO",   "Pensador e matematico grego antigo.",                0, 4, 'V', 0},
        {"CARRO", "Meio de transporte comum nas cidades.",       5, 0, 'H', 0},
        {"SOFA",   "Movel bastante confortavel famoso na abertura dos Simpsons.",                      3, 7, 'V', 0}
    };

    char palpite[50];
    int acertos = 0;

    printf("== JOGO DE PALAVRAS CRUZADAS ==\n");

    while (acertos < QTD_PALAVRAS) {
        mostrarTabuleiro(tabuleiro);

        printf("\nPalavras restantes:\n");
        for (int i = 0; i < QTD_PALAVRAS; i++) {
            if (!lista[i].preenchida)
                printf(" %d) %s\n", i + 1, lista[i].dica);
        }

        int escolha;
        printf("\nEscolha o número da dica: ");
        scanf("%d", &escolha);
        escolha--;

        if (escolha < 0 || escolha >= QTD_PALAVRAS || lista[escolha].preenchida) {
            printf("Opcao inválida!\n");
            continue;
        }

        printf("Digite a palavra: ");
        scanf("%s", palpite);
        stringMaiuscula(palpite);

        if (strcmp(palpite, lista[escolha].palavra) == 0) {
            printf("Correto!\n");
            preencherPalavra(tabuleiro, lista[escolha]);
            lista[escolha].preenchida = 1;
            acertos++;
        } else {
            printf("Palavra incorreta!\n");
        }
    }

    printf("\n== PARABÉNS! VOCÊ COMPLETOU A CRUZADINHA! ==\n");
    mostrarTabuleiro(tabuleiro);

    return 0;
}
