#include <stdio.h>

void imprime_horario(int horas, int minutos, int formato) {

    horas += minutos / 60;
    minutos = minutos % 60;
    horas = horas % 24;

    if (formato == 0) {
        // Formato 24h
        printf("%02d:%02d\n", horas, minutos);
    } else {
        // Formato 12h
        const char* periodo = (horas >= 12) ? "PM" : "AM";
        int hora_convertida = horas % 12;
        if (hora_convertida == 0) hora_convertida = 12;
        printf("%02d:%02d %s\n", hora_convertida, minutos, periodo);
    }
}

int main() {
    int hora_inicial, minuto_inicial, formato_desejado;

    printf("Digite a hora inicial, minuto inicial e formato (0=24h, 1=12h): ");
    scanf("%d %d %d", &hora_inicial, &minuto_inicial, &formato_desejado);

    printf("Horários das Rondas\n");

    int incrementos_horas[] = {0, 1, 2, 4, 12};
    int incrementos_minutos[] = {0, 0, 10, 40, 5};

    for (int i = 0; i < 5; i++) {
        imprime_horario(hora_inicial + incrementos_horas[i], minuto_inicial + incrementos_minutos[i], formato_desejado);
    }

    return 0;
}