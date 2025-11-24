#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    char name[100];
    char dept[50];
    int ID;
    char add[60];
} student;

int main()
{
    int n;
    printf("How many Student Data You want to Store: ");
    scanf("%d", &n);

    student arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", arr[i].name); // space before %[^\n]

        printf("Enter ID: ");
        scanf("%d", &arr[i].ID);

        printf("Enter DEPT: ");
        scanf(" %[^\n]", arr[i].dept); // space fixes skipping

        printf("Enter Address: ");
        scanf(" %[^\n]", arr[i].add);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll %d Name    : %s\n", i + 1, arr[i].name);
        printf("Roll %d Dept    : %s\n", i + 1, arr[i].dept);
        printf("Roll %d ID      : %d\n", i + 1, arr[i].ID);
        printf("Roll %d Address : %s\n\n", i + 1, arr[i].add);
    }

    return 0;
}