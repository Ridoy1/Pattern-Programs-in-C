#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    printf("Inverted Left Half Pyramid \n\n");
    for (i = n; i >= 1; i--)
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