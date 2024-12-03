#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    printf("Right Half Pyramid \n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}