#include <stdio.h>
int main(){

    int gols_inter, gols_gremio, continuar = 1, quant_jogos = 0;
    int vitorias_inter = 0, vitorias_gremio = 0, empates = 0;

    
    while (continuar == 1)
    {
        scanf("%d %d", &gols_inter, &gols_gremio); // leitura de gols
        quant_jogos++; // soma a quantidade de jogos (incremento)
        

        // quantidade de vitórias ou empates
        if (gols_inter > gols_gremio)
        {
            vitorias_inter++;
        }

        else
        {
            if (gols_gremio > gols_inter)
            {
                vitorias_gremio++;
            }

            else
            {
                empates++;
            }
        }     
        
        
        printf("Novo grenal (1-sim 2-nao)\n"); // nova partida
        scanf("%d", &continuar);


        if (continuar == 2) // parar o loop
        {
            break;
        } 
    }
    

    // impressão dos resultados
    printf("%d grenais\n", quant_jogos);
    printf("Inter:%d\n", vitorias_inter);
    printf("Gremio:%d\n", vitorias_gremio);
    printf("Empates:%d\n", empates);
    
    
    // quem venceu mais
    if (vitorias_inter > vitorias_gremio)
    {
        printf("Inter venceu mais\n");
    }

    else
    {
        if (vitorias_gremio > vitorias_inter)
        {
            printf("Gremio venceu mais\n");
        }

        else
        {
            printf("Empate\n");
        }     
    }
    

    return 0;
}