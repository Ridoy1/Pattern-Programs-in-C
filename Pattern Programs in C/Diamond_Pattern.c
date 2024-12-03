#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    printf("Diamond Pattern \n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}