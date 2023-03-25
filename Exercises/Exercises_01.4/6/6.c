#include <stdio.h>

int fibo(int n) {
    int a = 0, b = 1, c, i;
    
    if (n == 0) {
        return a;
    }
    
    printf("%d", b);
    for (i = 2; i <= n; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");

    return b;
}

int main() {
    int n;

    printf("Digite o número de termos da sequência de Fibonacci que deseja imprimir: ");
    scanf("%d", &n);

    fibo(n);
    
    return 0;
}