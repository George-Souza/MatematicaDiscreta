#include<stdio.h>


int main()
{
    int n, d;

    printf("Digite um número:\n");

    scanf("%d", &n);

    for(d = 2; n > 1; d++)
    {
        while(n % d == 0)
        {
            printf("%d|%d\n", n, d);

            n /= d;
        }
    }
    
    return 0;
}
