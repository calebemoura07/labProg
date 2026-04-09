/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: calculo de fatorial de N*/

#include <stdio.h>
int main()
{

    int n = 1, i, fatorial = 1;

    printf("Valor para calculo do fatorial: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0! = 1");
    }
    
    else
    {
        for (i = 0; i < n; i++)
        {
            fatorial *= n - i;
        }

        printf("%d! = %d\n", n, fatorial);
    }
    

    return 0;
}