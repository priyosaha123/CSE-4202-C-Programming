#include <stdio.h>
#include <stdlib.h>
typedef struct time
{
    float hours;
    float min;
    float sec;
} time;

int main()
{
    time t1, t2, result;
    printf("Enter First Time's Hours :\n");
    scanf("%f", &t1.hours);
    printf("Enter First Time's Minutes :\n");
    scanf("%f", &t1.min);
    printf("Enter First Time's Sec :\n");
    scanf("%f", &t1.sec);

    printf("Enter second Time's Hours :\n");
    scanf("%f", &t2.hours);
    printf("Enter second Time's Minutes :\n");
    scanf("%f", &t2.min);
    printf("Enter second Time's Sec :\n");
    scanf("%f", &t2.sec);

    result.hours = t1.hours - t2.hours;
    result.min = t1.min - t2.min;
    result.sec = t1.sec - t2.sec;
    if (result.sec >= 60)
    {
        result.min += (int)(result.sec / 60);
        result.sec = (int)result.sec % 60;
    }
    if (result.min >= 60)
    {
        result.hours += (int)(result.min / 60);
        result.min = (int)result.min % 60;
    }

    printf("\nThe Time differance is :%f hour %f minuties %f sec \n", result.hours, result.min, result.sec);
    return 0;
}