#include <stdio.h>
#include <stdlib.h>
typedef struct dis
{
    float feet;
    float inch;
} distance;

int main()
{
    distance d1, d2, result;
    printf("Enter the First distance :(feet)\n");
    scanf("%f", &d1.feet);

    printf("Enter the Second distance :(feet)\n");
    scanf("%f", &d2.feet);

    printf("Enter the First distance :(inch)\n");
    scanf("%f", &d1.inch);

    printf("Enter the second distance :(inch)\n");
    scanf("%f", &d2.inch);
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    if (result.inch >= 12)
    {
        result.feet += (int)(result.inch / 12);
        result.inch = (int)result.inch % 12;
    }
    printf("\nThe total distance is %f feet %f inch\n", result.feet, result.inch);
    return 0;
}
