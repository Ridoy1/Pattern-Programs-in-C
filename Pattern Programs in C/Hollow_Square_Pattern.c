#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    printf("Hollow square Pattern \n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  "); // two space
            }
        }
        printf("\n");
    }

    return 0;
}