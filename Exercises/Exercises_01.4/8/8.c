#include <stdio.h>

// Função iterativa
int soma_iterativa(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

// Função recursiva
int soma_recursiva(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma_recursiva(n-1);
    }
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    int soma_iter = soma_iterativa(n);
    int soma_rec = soma_recursiva(n);

    printf("Soma iterativa: %d\n", soma_iter);
    printf("Soma recursiva: %d\n", soma_rec);

    return 0;
}