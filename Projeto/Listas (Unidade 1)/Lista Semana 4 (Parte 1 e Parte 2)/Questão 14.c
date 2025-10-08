#include <stdio.h>

int main() {
    float preco_venda, custo;

    int melhor_oferta_x = 1;
    int melhor_oferta_y = 1;
    float maior_razao = 1.0;

    printf("Digite o preco de venda p: ");
    scanf("%f", &preco_venda);
    printf("Digite o preco de producao q: ");
    scanf("%f", &custo);

    for (int x = 1; x <= 10; x++) {
        for (int y = 1; y < x; y++) {
            if ((y * preco_venda) >= (x * custo)) {

                float razao_atual = (float)x / y;

                if (razao_atual > maior_razao) {
                    maior_razao = razao_atual;
                    melhor_oferta_x = x;
                    melhor_oferta_y = y;
                }
            }
        }
    }
    printf("A melhor promocao para os produtos são: leve %d pague %d\n", melhor_oferta_x, melhor_oferta_y);

    return 0;
}