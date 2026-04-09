#include <stdio.h>
int main()
{
    int i, voto = 0, impeachment = 0, arquivada = 0;
    long long numJogadores = 0;

    
    while (scanf("%lld", &numJogadores) != EOF)
    {
        impeachment = 0;

        for (i = 0; i < numJogadores; i++)//loop para ler votos
        {
            scanf("%d", &voto);
            if (voto == 1)//verifica se voto foi 1
            {
                impeachment++;
            }
        }

        //bloco que verifica se havera impeachment
        if (impeachment >= ((float)(numJogadores * 2) / 3))
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }

    return 0;
}