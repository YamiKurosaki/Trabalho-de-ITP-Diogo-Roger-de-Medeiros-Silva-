#include <stdio.h>

// ======================= COMPRIMENTO =======================
void converterComprimento(double valor, int unidade) {
    double fatores[7] = {1000, 100, 10, 1, 0.1, 0.01, 0.001}; // tudo em metros
    char *nomes[7] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};

    double metros = valor * fatores[unidade];

    printf("\n%.2f %s convertido:\n", valor, nomes[unidade]);
    for (int i = 0; i < 7; i++) {
        double convertido = metros / fatores[i];
        printf("%10.5f %s\n", convertido, nomes[i]);
    }
}

// ======================= MASSA =======================
void converterMassa(double valor, int unidade) {
    double fatores[3] = {1000, 1, 0.001}; // tudo em gramas
    char *nomes[3] = {"kg", "g", "mg"};

    double gramas = valor * fatores[unidade];

    printf("\n%.2f %s convertido:\n", valor, nomes[unidade]);
    for (int i = 0; i < 3; i++) {
        double convertido = gramas / fatores[i];
        printf("%10.5f %s\n", convertido, nomes[i]);
    }
}

// ======================= TEMPO =======================
void converterTempo(double valor, int unidade) {
    double fatores[3] = {3600, 60, 1}; // tudo em segundos
    char *nomes[3] = {"h", "min", "s"};

    double segundos = valor * fatores[unidade];

    printf("\n%.2f %s convertido:\n", valor, nomes[unidade]);
    for (int i = 0; i < 3; i++) {
        double convertido = segundos / fatores[i];
        printf("%10.5f %s\n", convertido, nomes[i]);
    }
}

// ======================= MAIN =======================
int main() {
    int opcao, unidade, continuar = 1;
    double valor;

    while (continuar == 1) {
        printf("\n=== Conversor de Medidas ===\n");
        printf("1 - Comprimento (km, hm, dam, m, dm, cm, mm)\n");
        printf("2 - Massa (kg, g, mg)\n");
        printf("3 - Tempo (h, min, s)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n0 - km\n1 - hm\n2 - dam\n3 - m\n4 - dm\n5 - cm\n6 - mm\n");
            printf("Escolha a unidade de entrada: ");
            scanf("%d", &unidade);
            if (unidade >= 0 && unidade < 7) {
                printf("Digite o valor: ");
                scanf("%lf", &valor);
                converterComprimento(valor, unidade);
            } else {
                printf("Unidade inválida!\n");
            }
        } 
        else if (opcao == 2) {
            printf("\n0 - kg\n1 - g\n2 - mg\n");
            printf("Escolha a unidade de entrada: ");
            scanf("%d", &unidade);
            if (unidade >= 0 && unidade < 3) {
                printf("Digite o valor: ");
                scanf("%lf", &valor);
                converterMassa(valor, unidade);
            } else {
                printf("Unidade inválida!\n");
            }
        } 
        else if (opcao == 3) {
            printf("\n0 - h\n1 - min\n2 - s\n");
            printf("Escolha a unidade de entrada: ");
            scanf("%d", &unidade);
            if (unidade >= 0 && unidade < 3) {
                printf("Digite o valor: ");
                scanf("%lf", &valor);
                converterTempo(valor, unidade);
            } else {
                printf("Unidade inválida!\n");
            }
        } 
        else if (opcao == 0) {
            continuar = 0;
        } 
        else {
            printf("Opção inválida!\n");
        }

        if (opcao != 0) {
            printf("\nDeseja converter outro valor? (1=Sim, 0=Não): ");
            scanf("%d", &continuar);
        }
    }

    printf("Encerrando o programa...\n");
    return 0;
}
