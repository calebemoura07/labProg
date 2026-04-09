/*Pontifícia Universidade Católica de Goiás
Disciplina: Laboratório de Programação
Professor: Me. Ricardo Kratz
Aluno: Calebe de Oliveira Moura
Data: 01/04/2026
Descrição: verificar se 3 valores formam um triangulo*/

#include <stdio.h>
int main()
{

    float a, b, c;
    
    printf("Digite A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);


    if ((a < b + c) && (b < a + c) && (c < a + b)) //verifica se forma triangulo
    {
        if (a == b && b == c)//verifica se os lados sao iguais
        {
            printf("Triangulo equilatero\n");
        }

        else //nao tem os 3 lados iguais
        {
            if (a != b && b != c && c != a)//verifica se tem 3 lados diferentes
            {
                printf("Triangulo escaleno\n");
            }
            
            else
            {
                printf("Triangulo isosceles\n");
            }
        }
        
    }

    else //nao forma triangulo
    {
        printf("\nOs valores digitados nao formam um triangulo\n\n");
    }
    

    return 0;
}