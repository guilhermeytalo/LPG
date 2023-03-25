#include <stdio.h>

int maior_valor (int x, int y, int z) {
    if(x >= y && x >= z)
        return x;

    if(y >= x && y >= z)
        return y;
    
    if(z >= x && z >= y)
        return z;
}

int main() {
    int a, b, c;
    
    printf("Insira tres valores inteiros: ");
    scanf("%i %i %i", &a, &b, &c);
    
    printf("O maior valor é %i.", maior_valor(a, b, c));
    return 0;
}
