#include <stdio.h>
int main()
{
    int r1, c1;
    printf("Enter the 1st matrix's Rows & cols: \n");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];

    printf("Enter The elements of 1st matrix: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int r2, c2;
    printf("Enter the 2nd matrix's Rows & cols:\n ");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    printf("Enter The elements of 2nd matrix: \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int res[r1][c2];
    if (c1 != r2)
    {
        printf("The matrices can not be multiplied");
    }
    else
    {
        printf("The resulted matrix is:\n ");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    res[i][j] = res[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%4d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
