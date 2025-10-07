#include <stdio.h>
#include <math.h>

int main() {

    float capital, taxa, montante;
    int tempo_em_anos;;

    printf("Digite o valor inicial do capital: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa);

    printf("Digite o tempo que deseja investir (em anos): ");
    scanf("%d", &tempo_em_anos);

    montante = capital * pow((1 + (taxa / 100)), tempo_em_anos);

    printf("O montante final depois de %d anos é: %.2f\n", tempo_em_anos, montante);

    return 0;
}