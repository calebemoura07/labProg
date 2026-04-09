/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: verificar se N é par ou impar e positivo ou negativo*/

#include <stdio.h>
int main()
{

    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)//verifica se é par ou impar
    {
        printf("Par\n");
    }
    
    else
    {
        printf("Impar\n");
    }



    if (num >= 0)//verifica se é positivo ou negativo
    {
        printf("Positivo\n");
    }

    else
    {
        printf("Negativo\n");
    }
    

    return 0;
}