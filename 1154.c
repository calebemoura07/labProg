#include <stdio.h>
int main()
{
   int num = 0, quantidade = 0, soma = 0;
   float media = 0;
   
   while(num >= 0)//loop lendo numero ate que num seja negativo
   {
        scanf("%d", &num);
        
        if(num >= 0)//se num >= 0, entra na soma
        {
            soma += num;
            quantidade++;
            media = (float)soma / quantidade;    
        }
        
        else//se num < 0, nao entra na soma, o programa nao executa mais
        {
            break;
        }
    }
    
    printf("%.2f\n", media);//print fora do while para printar somente 1 vez
 
    return 0;
}