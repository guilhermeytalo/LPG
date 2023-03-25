#include <stdio.h>

float serie_harmonica_iterativa(int n) {
    float S = 0;
    for (int i=2; i<=n; i++) {
        S += 1.0/i;
    }
    return S;
}

float serie_harmonica_recursiva(int n) {
    if (n == 2) {
        return 1.0/2;
    } else {
        return 1.0/n + serie_harmonica_recursiva(n-1);
    }
}

int main() {
    int n;
    printf("Digite um inteiro n: ");
    scanf("%d", &n);
    float S_iterativa = serie_harmonica_iterativa(n);
    float S_recursiva = serie_harmonica_recursiva(n);
    printf("A soma da série harmônica de 2 até %d é:\n", n);
    printf("Versão iterativa: %f\n", S_iterativa);
    printf("Versão recursiva: %f\n", S_recursiva);
    return 0;
}
