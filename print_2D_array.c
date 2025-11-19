#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements of array:\n");
    for (int i = 0; i < rows; i++) // FIXED: comma → less than
    {
        for (int j = 0; j < cols; j++) // FIXED: i → j
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d", arr[i][j]); // FORMATTED: spacing for box style
        }
        printf("\n"); // NEW LINE after each row
    }

    return 0;
}