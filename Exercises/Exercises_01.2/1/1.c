#include <stdio.h>

int main(void)
{

    int n;

    int par = 0, impar = 0, positivo = 0, negativo = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor inteiro: \n");
        scanf("%d", &n);

        if ((n % 2 == 0))
        {

            par++;
        }
        else if ((n % 2 != 0))
        {

            impar++;
        }

        if ((n > 0))
        {

            positivo++;
        }
        else if ((n < 0))
        {
            negativo++;
        }
    }

    printf("%d valor(es) par(es)\n", par);

    printf("%d valor(es) impar(es)\n", impar);

    printf("%d valor(es) positivo(s)\n", positivo);

    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}