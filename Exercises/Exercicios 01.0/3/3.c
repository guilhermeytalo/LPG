#include <stdio.h>

int main() {
    int inicio, fim, tempo = 24;

    printf("Digite a hora de inicio/fim de jogo: \n");
    scanf("%i %i", &inicio, &fim);

    if(inicio < fim) {
        tempo = fim - inicio;
    } else if (fim < inicio) {
        tempo = 24 - inicio + fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}