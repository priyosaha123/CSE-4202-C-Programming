#include <stdio.h>
int main()
{
    int arr[7];
    printf("Enter the 7 days Temp: \n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int max = arr[0];
    int min = arr[0];
    for (i = 0; i < 7; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    printf("Highest Temperture : %d C on Day %d\n", max, i + 1);
    printf("Lowest  Temperture : %d C on Day %d\n", min, i + 1);
    return 0;
}
