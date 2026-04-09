/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: anos para ultrapassar a altura*/

#include <stdio.h>
int main()
{

    float alturaF = 1.50, alturaC = 1.10; 
    int anos = 0;

    while (alturaF >= alturaC)
    {
        alturaF += 0.02;
        alturaC += 0.03;
        anos++;
    }

    printf("Anos para ultrapassar: %d\n", anos);    

    return 0;
}