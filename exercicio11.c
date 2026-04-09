/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: calculo de multiplos de 7 e >= 100*/

#include <stdio.h>
int main()
{

    int i;
    
    for (i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d ", i);
        }
        
    }
    

    return 0;
}