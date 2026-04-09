/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 06/04/2026
Descrição: imprimindo um vetor com valores inversos*/

#include <stdio.h>
int main()
{
    int x[5], y[5], i;

    printf("Digite 5 valores: ");//loop para ler valores de x[]
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 5; i++)//copia os valores do vetor x[] para o vetor y[]
    {
        y[4-i] = x[i];
    }

    for (i = 0; i < 5; i++)//loop para imprimir valores de y[]
    {
        printf("%d ", y[i]);
    }
    

    return 0;
}