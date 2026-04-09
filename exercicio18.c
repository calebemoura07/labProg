/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 06/04/2026
Descrição: soma de 5 valores armazenados em um vetor*/

#include <stdio.h>
int main()
{
    int x[5], i, soma = 0;

    printf("Digite 5 valores para somar: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
        soma += x[i];
    }

    printf("Soma dos valores: %d\n", soma);
    

    return 0;
}