#include<stdio.h>

int main()
{
    int n, div = 0;
    printf("Digite um Número:\n");
    scanf("%d", &n);
    
    for(int d = 1; d <= n; d++)
    {
        if(n % d == 0)
        {
            div++;
        }
        
    }
    if(div == 2)
    {
        printf("É primo!\n");
    }
    else
    {
        printf("Não é primo!\n");
    }

    return 0;
}
