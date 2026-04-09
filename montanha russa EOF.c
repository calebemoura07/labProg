#include <stdio.h>
int main() 
{
    int numVisitantes = 0, alturaMin = 0, alturaMax = 0; 
    int altura = 0, quantAutorizados = 0, i;

    while (scanf("%d %d %d", &numVisitantes, &alturaMin, &alturaMax) != EOF)
    {
        quantAutorizados = 0;
        for (i = 0; i < numVisitantes; i++)
        {
            scanf("%d", &altura);
            
            if (altura >= alturaMin && altura <= alturaMax)
            {
                quantAutorizados++;
            } 
        }
        printf("%d\n", quantAutorizados);
    }   

    return 0;
}


