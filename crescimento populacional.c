#include <stdio.h>
#include <math.h>
int main(){
    
    int numCasos, i, quantAnos = 0;
    long int popA, popB;
    double G1, G2;

    scanf("%d", &numCasos);

    for (i = 0; i < numCasos; i++)// iterações para quant de testes de escolha do usuário
    {
        scanf("%ld %ld %lf %lf", &popA, &popB, &G1, &G2);// lê populações e taxas de crescimento

        while (popA <= popB)// loop até que popA popB
        {
            popA += floor(popA * G1 / 100);// crescimento das pop's
            popB += floor(popB * G2 / 100);// crescimento das pop's
            quantAnos++;
            
            if (quantAnos > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        
        if (quantAnos <= 100)
        {
            printf("%d anos.\n", quantAnos);
        }
        
        quantAnos = 0;// zerar a contagem de anos a cada teste
    }

    return 0;
}