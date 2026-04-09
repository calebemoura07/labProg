#include <stdio.h>
int main()
{

    int numero, i = 0;

    scanf("%d", &numero);

    for (i = 1; i <= numero * 4 - 1; i += 4)
    {
        printf("%d %d %d PUM\n", i, i+1, i+2);
    }
    

    return 0;
}