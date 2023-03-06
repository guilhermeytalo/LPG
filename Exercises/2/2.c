#include <stdio.h>

double quadrado(double value){
    return value * value;
}

int main()
{
    double a, b, c, aux;
    double a2, b2, c2;

    printf("Digite o valor de a,b e c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b) { aux = a; a = b; b = aux;}
    if (b < c) { aux = b; b = c; c = aux;}
    if (a < b) { aux = a; a = b; b = aux;}


    a2 = quadrado(a);
    b2 = quadrado(b);
    c2 = quadrado(c);



    if (a >= b + c) {
        printf("NÃO FORMA TRIANGULO\n");
    }
    else if (a2 == (b2 + c2)) {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (a2 > (b2 + c2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (a2 < (b2 + c2)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (a2 == b2 && a2 == c2) {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (a2 == b2 || a2 == c2 || b2 == c2) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}