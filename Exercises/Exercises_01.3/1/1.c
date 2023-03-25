#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, K, contador = 0, numero_atual;
    
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    printf("Digite o valor de K: ");
    scanf("%d", &K);
    
    numero_atual = K;
    
    while (contador < N) {
        if (eh_primo(numero_atual)) {
            printf("%d, ", numero_atual);
            contador++;
        }
        numero_atual++;
    }
    
    return 0;
}
Explicando o código: primeiro, declaramos uma função eh_primo que recebe um número n e retorna true se ele é primo e false caso contrário. Essa função verifica se o número é menor do que 2 (pois 1 não é primo) e em seguida, itera por todos os números de 2 até a raiz quadrada de n para verificar se n é divisível por algum deles. Se for, então n não é primo e a função retorna false. Caso contrário, a função retorna true.

Em seguida, no programa principal (main), pedimos ao usuário para digitar os valores de N e K. Em seguida, usamos um loop while para encontrar os N primeiros números primos a partir de K. Dentro desse loop, verificamos se o número atual é primo usando a função eh_primo, e se for, imprimimos na tela e incrementamos o contador. Por fim, incrementamos o número atual e continuamos o loop até que tenhamos encontrado os N números primos.





