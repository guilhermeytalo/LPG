#include <stdio.h>

double calcularEIterativo(int n) {
    double e = 0.0, termo = 1.0;
    int i, fatorial = 1;
    for (i = 0; i <= n; i++) {
        if (i > 0) {
            fatorial *= i;
            termo = 1.0 / fatorial;
        }
        e += termo;
    }
    return e;
}

double calcularERecursivo(int n) {
    if (n == 0) {
        return 1.0;
    }
    int fatorial = 1, i;
    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }
    double termo = 1.0 / fatorial;
    return termo + calcularERecursivo(n - 1);
}

int main() {
    int n;
    printf("Digite um valor inteiro para n: ");
    scanf("%d", &n);

    double eIterativo = calcularEIterativo(n);
    printf("Valor de e (iterativo): %lf\n", eIterativo);

    double eRecursivo = calcularERecursivo(n);
    printf("Valor de e (recursivo): %lf\n", eRecursivo);

    return 0;
}




