#include <stdio.h>

// Medidor de distância/comprimento
void converterComprimento(double valor, int unidade) {
    double distancias[4] = {1000, 1, 0.01, 0.001};
    char *quantidade[4] = {"km","m","cm","mm"};

    double metros = valor * distancias[unidade];

    for(int i = 0; i < 4; i++) {
        double convertido = metros / distancias[i];
        printf("%.2f %s\n", convertido, quantidade[i]);
    }
}

// Conversor de Peso/massa
void converterMassa(double valor, int unidade) {
    double pesos[3] = {1000, 1, 0.001};
    char *pesagens[3] = {"kg","g","mg"};

    double gramas = valor * pesos[unidade];

    for(int i = 0; i < 3; i++) {
        double convertido = gramas / pesos[i];
        printf("%.2f %s\n", convertido, pesagens[i]);
    }
}

// Conversor de Tempo
void converterTempo(double valor, int unidade) {
    double tempos[3] = {3600, 60, 1};
    char *unidades[3] = {"h","min","s"};

    double segundos = valor * tempos[unidade];

    for(int i=0; i<3; i++) {
        double convertido = segundos / tempos[i];
        printf("%.2f %s\n", convertido, unidades[i]);
    }
}

int main() {
    int opcao, unidade, continuar = 1;
    double valor;

    while(continuar == 1) {
        printf("1-Comprimento  2-Massa  3-Tempo  0-Sair\n");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("0-km 1-m 2-cm 3-mm\n");
            scanf("%d", &unidade);
            if(unidade >= 0 && unidade < 4) {
                scanf("%lf", &valor);
                converterComprimento(valor, unidade);
            }
        }
        else if(opcao == 2) {
            printf("0-kg 1-g 2-mg\n");
            scanf("%d", &unidade);
            if(unidade >= 0 && unidade < 3) {
                scanf("%lf", &valor);
                converterMassa(valor, unidade);
            }
        }
        else if(opcao == 3) {
            printf("0-h 1-min 2-s\n");
            scanf("%d", &unidade);
            if(unidade >= 0 && unidade < 3) {
                scanf("%lf", &valor);
                converterTempo(valor, unidade);
            }
        }
        else if(opcao == 0) {
            continuar = 0;
        }

        if(opcao != 0) {
            printf("1-Continuar 0-Sair\n");
            scanf("%d", &continuar);
        }
    }

    return 0;
}
