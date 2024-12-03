#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    printf("Left Half Pyramid \n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * (n - i); j++)
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