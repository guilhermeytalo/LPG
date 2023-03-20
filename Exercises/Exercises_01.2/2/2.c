#include <stdio.h>

int main()
{
    float n1, n2, n3, media, nota;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite o valor das 3 notas do aluno: \n");
        scanf("%f %f %f", &n1, &n2, &n3);
        nota = (n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0);
        media = nota / 10.0;
        printf("%.1f\n", media);
    }

    return 0;
}