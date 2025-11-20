#include <stdio.h>
int main()
{
    int n;
    printf("How many Line You want: ");
    scanf("%d", &n);
    int nst = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - 1 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        nst += 2;
        printf("\n");
    }
    return 0;
}