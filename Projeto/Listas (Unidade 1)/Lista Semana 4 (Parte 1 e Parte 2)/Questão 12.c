#include <stdio.h>

int main() {
    float preco_fornecedor1, preco_fornecedor2, quantia_disponivel;

    printf("Digite o preco oferedido pelo fornecedor 1: ");
    scanf("%f", &preco_fornecedor1);

    printf("Digite o preco oferedido pelo fornecedor 2: ");
    scanf("%f", &preco_fornecedor2);

    printf("Digite a quantia de dinheiro disponivel: ");
    scanf("%f", &quantia_disponivel);

    printf("Verificando todas as possibilidades\n");


    for (int quantidade1 = 0; quantidade1 <= 10; quantidade1++) {
        for (int quantidade2 = 0; quantidade2 <= 10; quantidade2++) {

            float custo_total = (quantidade1 * preco_fornecedor1) + (quantidade2 * preco_fornecedor2);

            if (custo_total <= quantia_disponivel) {
                float restante = quantia_disponivel - custo_total;
                printf("Comprando %d do primeiro e %d do segundo sobra: %.2f\n", quantidade1, quantidade2, restante);
            }
        }
    }

    return 0;
}