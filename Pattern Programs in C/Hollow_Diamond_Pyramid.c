#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    printf("Hollow Diamond Pyramid \n\n");
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || i == n || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = n - 2; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || i == n || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}