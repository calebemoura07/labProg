/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: cálculo da distância entre 2 pontos*/

#include <stdio.h>
#include <math.h>
int main()
{

    int x1, x2, y1, y2;
    float distancia;

    printf("Valores ponto P(x1,y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Valores ponto Q(x2,y2): ");
    scanf("%d %d", &x2, &y2);

    distancia = (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));

    printf("Distancia: %.2f\n", distancia);

    return 0;
}