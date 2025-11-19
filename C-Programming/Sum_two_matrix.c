#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the matix's rows and cols: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter the 1st matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[n][m];
    printf("Enter the 2nd  matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int sum[n][m];
    printf("Sum of two matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}