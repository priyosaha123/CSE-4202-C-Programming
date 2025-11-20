#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of element :");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum is : %d", sum);
    return 0;
}
