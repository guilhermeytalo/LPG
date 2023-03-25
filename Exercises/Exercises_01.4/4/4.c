#include <stdio.h>

void somaImpares(float x, float y) {
    float soma = 0;
    int temp;
    if (y > x) {
        temp = x;
        x = y;
        y = temp;
    }

    for (int i = y + 1; i < x; i++) {
        if (i % 2 != 0)
            soma = soma + i;
    }
    printf("soma = %.2f", soma);
}

int main(void) {
    float a, b;
    printf("digite dois valores:\n");
    scanf("%f%f", &a, &b);

    somaImpares(a, b);
    return 0;
}
