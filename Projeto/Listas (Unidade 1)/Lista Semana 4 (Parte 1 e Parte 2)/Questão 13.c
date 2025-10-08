#include <stdio.h>

int main() {
    float preco_1, preco_2, quantia_disponivel;

    int melhor_quantidade_1 = 0;
    int melhor_quantidade_2 = 0;
    float menor_valor_restante;

    printf("Digite o preço do fornecedor numero 1: ");
    scanf("%f", &preco_1);

    printf("Digite o preço do fornecedor numero 2: ");
    scanf("%f", &preco_2);

    printf("Digite a quantia disponivel: ");
    scanf("%f", &quantia_disponivel);
    
    menor_valor_restante = quantia_disponivel + 1;

    for (int quantidade1 = 0; quantidade1 <= 10; quantidade1++) {
        for (int quantidade2 = 0; quantidade2 <= 10; quantidade2++) {

            float custo_total = (quantidade1 * preco_1) + (quantidade2 * preco_2);

            if (custo_total <= quantia_disponivel) {

                float restante_atual = quantia_disponivel - custo_total;

                if (restante_atual < menor_valor_restante) {
                    menor_valor_restante = restante_atual;
                    melhor_quantidade_1 = quantidade1;
                    melhor_quantidade_2 = quantidade2;
                }
            }
        }
    }
    printf("\nResta menos comprando %d do primeiro e %d do segundo\n", melhor_quantidade_1, melhor_quantidade_2);

    return 0;
}