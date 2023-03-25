#include <stdio.h>

int primos(int num) {

    int i, cont = 0;

    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            cont++;
    }

    if (cont == 2) {
        return cont;
    } else {
        return 0;
    }
}

int main() {
    int N, K, j = 0, aux = 0;

    printf("este programa mostrará os N primos acima de K, Digite o valor de N e K respectivamente ");
    scanf("%d %d", &N, &K);

    while (aux < N) {
        K++;
        j = primos(K);

        if (j == 2) {
            aux++;
            printf("%d ", K);
        }
    }

    return 0;
}
