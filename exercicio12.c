/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: calculo de somatorio*/

#include <stdio.h>
int main()
{

    float i, j, resultado = 0;
    
    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            resultado += ((2 * j + 1) * i) / (2 * j + 5);
        }        
    }

    printf("Resultado: %f\n", resultado);
    printf("A formula executa 64 vezes\n");

    return 0;
}