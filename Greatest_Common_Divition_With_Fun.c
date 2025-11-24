#include <stdio.h>
#include <stdlib.h>
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int gcd(int a, int b)
{
    int hcd;
    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcd = i;
        }
    }
    return hcd;
}

int main()
{
    int a, b;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("ENter the second Number: ");
    scanf("%d", &b);
    int hcd = gcd(a, b);
    printf("The Greatest Common Division is : %d ", hcd);

    return 0;
}
