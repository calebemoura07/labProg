/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 06/04/2026
Descrição: soma de numeros - while*/

#include <stdio.h>
int main()
{

    int quantNum, soma = 0, num, i = 0;

    printf("Quantos números deseja somar? ");
    scanf("%d", &quantNum);

    while (i != quantNum)
    {
        i++;
        printf("Valor %d: ", i);
        scanf("%d", &num);
        soma += num;
    }
    
    printf("Soma: %d\n", soma);

    return 0;
}