#include <stdio.h>

int soma_especial(int n, int k, int x) {
    int soma = 0;
    int count = 0;
    int atual = x;
    while (count < n) {
        if (atual % k == 0) {
            soma += atual;
            count++;
        }
        atual++;
    }
    return soma;
}

int main() {
    int n, k, x, resultado;
    printf("Digite os valores de n, k e x: ");
    scanf("%d %d %d", &n, &k, &x);

    resultado = soma_especial(n, k, x);
    printf("O resultado da soma especial eh: %d\n", resultado);

    return 0;
}

