#include <stdio.h>
#include <stdbool.h>

bool is_digit(char c)
{
    if (c >= 48 && c <= 57) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    char input;
    printf("Digite um caractere: ");
    scanf("%c", &input);

    if (is_digit(input)) {
        int digit = input - '0';
        printf("O caractere digitado representa o dígito %d\n", digit);
    }
    else {
        printf("O caractere digitado não representa um dígito\n");
    }

    return 0;
}