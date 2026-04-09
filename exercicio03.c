/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: cálculo de latas necessárias para pintar o tanque de combustível*/

#include <stdio.h>
#include <math.h>
int main()
{

    float altura, raio, area;
    float quantLitros, custoTotal;
    int quantLatas;

    printf("Raio: ");
    scanf("%f", &raio);
    
    printf("Altura: ");
    scanf("%f", &altura);

    area = (3.14 * pow(raio, 2)) + (2 * 3.14 * raio * altura);


    quantLitros = area / 3; //  area / 3 para achar quanto Litros
    quantLatas = ceil(quantLitros / 5); //  litros / 5 para achar latas;    CEIL(cima) , FLOOR(baixo), ROUND(mais proximo)
    custoTotal = quantLatas * 20.0; //  latas * 20 para achar custo

    printf("Latas necessarias: %d\n", quantLatas);
    printf("Custo total: R$ %.2f\n", custoTotal);

    return 0;
}