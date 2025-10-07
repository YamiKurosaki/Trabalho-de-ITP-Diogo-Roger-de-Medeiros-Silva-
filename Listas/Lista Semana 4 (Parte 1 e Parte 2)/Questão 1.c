#include <stdio.h>

int main() {

    float comprimento, largura, bolso;
    int contador_dobras = 0;

    printf("Digite o comprimento da folha: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da folha: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do bolso: ");
    scanf("%f", &bolso);

    while (comprimento >= bolso && largura >= bolso) {
        
        if (comprimento > largura) {

            comprimento = comprimento / 2.0;
        } else {

            largura = largura / 2.0;
        }
        contador_dobras++;
    }

    printf("Resultado: São necessárias %d dobras para a folha caber no bolso.\n", contador_dobras);

    return 0;
}