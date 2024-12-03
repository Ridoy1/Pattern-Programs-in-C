#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    printf("Inverted Right Half Pyramid \n\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}