#include <stdio.h>

int main() {
    int diasDosMeses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dia = 0, mes = 0;
    int dias = 0;

    printf("Digite o dia e o mes do evento: \n");
    scanf("%i %i", &dia, &mes);

    dias = dia;
    for(int i = 0; i < mes - 1; i++) {
        dias += diasDosMeses[i];
    }

    printf("%i DIA(S) DO INICIO DO ANO ATE O EVENTO. %i \n", dias, mes);

    return 0;
}