#include <stdio.h>
int main()
{
    int n;
    printf("ENter the no. of lines: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int first = 1;
        for (int k = 0; k < n - i - 1; k++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%4d", first);
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}