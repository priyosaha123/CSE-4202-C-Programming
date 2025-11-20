#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the array's row and column number: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter the elements of the Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int trans[m][n];
    // Transpose logic
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    // Print transposed matrix
    printf("\nThe Transpose Matrix is:\n");
    printf("+");
    for (int i = 0; i < n; i++)
        printf("-------+");
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf(" %-5d|", trans[i][j]);
        }
        printf("\n+");
        for (int j = 0; j < n; j++)
            printf("-------+");
        printf("\n");
    }

    return 0;
}