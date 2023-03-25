#include <stdio.h>
int tipo_triangulo(float x, float y, float z) {
    if (x >= y + z) {
        return 0;
    }

    if (x == y && x == z){
        return 1;
    } else if (x == y || x == z || y == z) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    float a, b, c, aux;
    int resultado;

    printf("Digite o valor de a,b e c: \n");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b < c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (a < b) {
        aux = a;
        a = b;
        b = aux;
    }

    resultado = tipo_triangulo(a, b, c);
    if (resultado == 0) {
        printf("Nao forma triangulo");
    }
    if (resultado == 1) {
        printf("Triangulo equilatero");
    }
    if (resultado == 2) {
        printf("Triangulo isosceles");
    }
    if (resultado == 3) {
        printf("Triangulo escaleno");
    }

    return 0;
}
