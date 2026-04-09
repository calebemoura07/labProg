#include <stdio.h>
#include <string.h>
int main()
{
    int quantCasos = 0, i;
    long long num1 = 0, num2 = 0, soma = 0; //exercicio coloca um limite alto de valores
    char nome1[15], nome2[15], escolha1[10], escolha2[10]; //definir um tamanho maior para as strings

    scanf("%d", &quantCasos);

    for (i = 0; i < quantCasos; i++)
    {
        scanf("%s %s %s %s", nome1, escolha1, nome2, escolha2);
        scanf("%lld %lld", &num1, &num2);    
        
        soma = num1 + num2;

        if (soma % 2 == 0)//soma é par
        {
            if (strcmp("PAR", escolha1) == 0)//escolha1 == PAR
            {
                printf("%s\n", nome1);
            }

            else//escolha1 == IMPAR
            {
                printf("%s\n", nome2);
            }
        }

        else//soma é impar
        {
            if (strcmp("IMPAR", escolha1) == 0)//escolha1 == IMPAR
            {
                printf("%s\n", nome1);
            }

            else//escolha1 == PAR
            {
                printf("%s\n", nome2);
            }
        }
    }
    

    return 0;
}