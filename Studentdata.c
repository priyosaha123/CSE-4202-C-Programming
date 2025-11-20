#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of student:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the marks of Student:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Markssheet :\n");
    printf("+-------+-------+\n");
    printf("| Rolls | Marks |\n");
    printf("+-------+-------+\n");
    for (int i = 0; i < n; i++)
    {
        printf("| %-5d | %-5d |\n", i, arr[i]);
    }
    printf("+-------+-------+\n");
    return 0;
}
