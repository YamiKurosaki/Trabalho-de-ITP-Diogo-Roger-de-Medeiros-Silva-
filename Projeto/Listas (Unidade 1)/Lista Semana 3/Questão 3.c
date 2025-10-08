#include <stdio.h>

int main() {
    float nota_1, nota_2, nota_3, media;

    printf("Digite a primeira nota que tirou: ");
    scanf("%f", &nota_1);

    printf("Digite a segunda nota que tirou: ");
    scanf("%f", &nota_2);

    printf("Digite a terceira nota que tirou: ");
    scanf("%f", &nota_3);

    media = (nota_1 + nota_2 + nota_3) / 3.0;

    printf("Sua média foi: %.1f\n", media);
    printf("Situação: ");

    if (media >= 7.0) {
        printf("Você está aprovado\n");

    } else if (media < 4.0) {
        printf("Você foi reprovado\n");
    } else {
        printf("Você está em recuperação\n");

        float nota_que_precisa = 10.0 - media;
        printf("Você precisa tirar no mínimo %.1f na prova final para ser aprovado.\n", nota_que_precisa);
    }

    return 0;
}