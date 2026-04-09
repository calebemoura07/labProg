/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: determinação do peso ideal*/

#include <stdio.h>
int main()
{

    float altura, pesoIdeal;
    char sexo[15];
   
    printf("Altura: ");
    scanf("%f", &altura);

    printf("Sexo: ");
    scanf("%s", &sexo);

    pesoIdeal = (72.7 * altura) - 58;
    printf("\n\nPeso Ideal: %.2f\n", pesoIdeal);

    return 0;
}