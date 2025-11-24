#include <stdio.h>
#include <stdlib.h>
typedef struct complex
{
    float real;
    float imagi;
} complex;

int main()
{
    complex c1, c2, result;
    printf("Enter the First Real Part :\n");
    scanf("%f", &c1.real);

    printf("Enter the Second Real:\n");
    scanf("%f", &c2.real);

    printf("Enter the First imaginary:\n");
    scanf("%f", &c1.imagi);

    printf("Enter the second Imaginary:\n");
    scanf("%f", &c2.imagi);

    result.real = c1.real + c2.real;
    result.imagi = c1.imagi + c2.imagi;

    printf("\nThe Total Sum is %f+%fi \n", result.real, result.imagi);
    return 0;
}
