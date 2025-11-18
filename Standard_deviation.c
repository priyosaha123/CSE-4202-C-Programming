#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    float sum = 0.0, average, stnadard_deviation;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    float arr[n];
    printf("ENter %d element :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;
    float sum_deviation = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum_deviation += (arr[i] - average) * (arr[i] - average);
    }
    stnadard_deviation = sqrt(sum_deviation / (n - 1));
    printf("standard deviation =%.2f\n", stnadard_deviation);
    return 0;
}