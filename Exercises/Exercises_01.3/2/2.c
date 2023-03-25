#include <stdio.h>
#include <math.h>

double taylor_exp(double x, int n) {
    double sum = 1.0;
    double term = 1.0;
    int i;
    for (i = 1; i <= n; i++) {
        term *= x / i;
        sum += term;
    }
    return sum;
}

int main() {
    double x = 1.0;
    int n = 10;
    printf("exp(%lf) = %lf\n", x, taylor_exp(x, n));
    return 0;
}