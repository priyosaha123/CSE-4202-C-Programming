#include <stdio.h>
#include <stdlib.h>

typedef struct marks
{
    char sub[100]; // subject name
    float marks;   // single mark
} marks;

int main()
{
    int n;
    printf("Enter The Number of Records: ");
    scanf("%d", &n);
    getchar(); // newline clear

    marks arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the subject: ");
        scanf(" %[^\n]", arr[i].sub); // space before %[^\n] skips newline

        printf("Enter marks: ");
        scanf("%f", &arr[i].marks);
    }

    printf("\nDisplaying Information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Subject: %s\n", arr[i].sub);
        printf("Marks: %.2f\n", arr[i].marks);
        printf("--------------------------\n");
    }

    return 0;
}