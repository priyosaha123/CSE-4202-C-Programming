#include <stdio.h>

// Function to add two matrices and print the result
void addMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols])
{
    int sum[rows][cols];
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%4d", sum[i][j]); // formatted spacing
        }
        printf("\n"); // new line after each row
    }
}

int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols];

    // Input for first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Call the function to add matrices
    addMatrix(rows, cols, a, b);

    return 0;
}