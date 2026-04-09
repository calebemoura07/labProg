/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: algoritmo para calcular a soma H/i, N vezes*/

#include <stdio.h>
int main()
{

    int n = 0, i;
    float h = 0;

    printf("Digite um valor N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        h += (float)1 / i;
    }
    
    printf("%f ", h);

    return 0;
}