/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 06/04/2026
Descrição: repetição até que o usuário digite -1*/

#include <stdio.h>
int main()
{

    int num, quant = 0, soma;
    float media;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (num != -1)
    {
        soma += num;
        quant++;
        printf("Digite um número: ");
        scanf("%d", &num);
    }
    
    media = (float)soma / quant;
    printf("Média: %.2f\n", media);

    return 0;
}