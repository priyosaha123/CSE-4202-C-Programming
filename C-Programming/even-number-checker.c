#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is an evern number \n", number);
    }
    else if (number % 2 != 0)
    {
        printf("%d is an odd number \n", number);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
