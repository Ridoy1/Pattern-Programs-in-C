#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    printf("Rhombus Patten \n\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}