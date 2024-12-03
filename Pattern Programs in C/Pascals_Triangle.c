#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k = 1;
    printf("Pascal's Triangle \n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        int c = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / j;
        }
        printf("\n");
    }

    return 0;
}