#include <stdio.h>
int main()
{
    int numero = 0, i, anterior = 0, atual = 1, soma = 0;

    scanf("%d", &numero);

    for (i = 0; i < numero; i++)
    {   
        if (i == 0)
            printf("%d", anterior);
        else
            printf(" %d", anterior);

        soma = anterior + atual;
        anterior = atual;
        atual = soma;
    }
    printf("\n");

    return 0;
}