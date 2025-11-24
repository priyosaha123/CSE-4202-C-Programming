#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primenumchecker(int n)
{
    int flag = 1;
    if (n == 0 || n == 1)
    {
        flag = 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int n1, n2, flag;
    printf("Enter Two number: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Prime numbers between %d and %d are:\n", n1, n2);

    for (int i = n1 + 1; i < n2; i++)
    {
        flag = primenumchecker(i);
        if (flag == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
