/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 06/04/2026
Descrição: imprimindo um vetor com valores inversos*/

#include <stdio.h>
int main()
{
    int x[10], i;
    
    
    for (i = 0; i < 10; i++)//loop para a formula x[i] = i - 2; 
    {
        x[i] = i - 2;
    }

    for (i = 0; i < 10; i++)//loop para imprimir
    {
        printf("%d ", x[i]);
    }
    
    return 0;
}