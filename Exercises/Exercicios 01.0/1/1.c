#include <stdio.h>

int main() {
    float x, y = 0;

    printf("Digite o valor para X e Y: \n");
    scanf("%f %f", &x, &y);

    if (x >= 0) {

        if (y == 0) {
            printf("Origem\n");
        }
        else {
            printf(y > 0 ? "Q1\n" : "Q4\n");
        }
    }
    else {
        printf(y > 0 ? "Q2\n" : "Q3\n");
    }

    return 0;
}