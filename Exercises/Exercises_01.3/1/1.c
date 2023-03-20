#include <stdio.h>
double tipo_triangulo(double x, double y, double z)
{
    if (x >= y + z)
    {
        return printf("NÃO FORMA TRIANGULO\n");
    }
    else if (x == (y + z))
    {
        return printf("TRIANGULO RETANGULO\n");
    }
    else if (x > (y + z))
    {
        return printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (x < (y + z))
    {
        return printf("TRIANGULO ACUTANGULO\n");
    }

    if (x == y && x == z)
    {
        return printf("TRIANGULO EQUILATERO\n");
    }
    else if (x == y || x == z || y == z)
    {
        return printf("TRIANGULO ISOSCELES\n");
    }
}

double quadrado(double value)
{
    return value * value;
}

int main()
{
    double a, b, c, aux;
    double a2, b2, c2;

    printf("Digite o valor de a,b e c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (b < c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    a2 = quadrado(a);
    b2 = quadrado(b);
    c2 = quadrado(c);

    tipo_triangulo(a2, b2, c2);

    return 0;
}