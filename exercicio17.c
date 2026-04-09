/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 06/04/2026
Descrição: soma de correspondentes nas sequencias*/

#include <stdio.h>
int main()
{
    int seq1[5], seq2[5], i, soma = 0;

    printf("Valores da sequencia 1: ");//le valores da seq1  
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &seq1[i]);
    }


    printf("Valores da sequencia 2: ");//le valores da seq2
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &seq2[i]);
    }
    

    for (i = 0; i < 5; i++)//loop para imprimir as somas
    {
        printf("Soma %d + %d: %d\n",seq1[i], seq2[i], seq1[i] + seq2[i]);
    }

    return 0;
}