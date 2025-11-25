#include <stdio.h>

struct Course
{
    char code[10];
    char title[100];
    float credit;
    float marks;
    float gradePoint;
};

float getGradePoint(float marks)
{
    if (marks >= 80)
        return 4.00;
    else if (marks >= 75)
        return 3.75;
    else if (marks >= 70)
        return 3.50;
    else if (marks >= 65)
        return 3.25;
    else if (marks >= 60)
        return 3.00;
    else if (marks >= 55)
        return 2.75;
    else if (marks >= 50)
        return 2.50;
    else if (marks >= 45)
        return 2.25;
    else if (marks >= 40)
        return 2.00;
    else
        return 0.00;
}

int main()
{

    struct Course courses[8] = {
        {"CSE4201", "Computer Programming & Applications", 3.00, 0, 0},
        {"CSE4202", "Programming Lab", 1.50, 0, 0},
        {"CSE4203", "Differential Calculus & Applications", 3.00, 0, 0},
        {"CSE4204", "Physics", 3.00, 0, 0},
        {"CSE4205", "Physics Lab", 1.50, 0, 0},
        {"MAT4201", "Engineering Differential Equations", 3.00, 0, 0},
        {"HUM4202", "Communication Skills", 1.50, 0, 0},
        {"ASE4202", "Workshop Technology-II", 3.00, 0, 0}};

    float totalCredits = 19.50;
    float totalQualityPoints = 0;

    printf("---- AAUR GPA Calculator ----\n");

    for (int i = 0; i < 8; i++)
    {
        printf("\nEnter marks for %s (%s): ", courses[i].code, courses[i].title);
        scanf("%f", &courses[i].marks);

        courses[i].gradePoint = getGradePoint(courses[i].marks);

        totalQualityPoints += courses[i].credit * courses[i].gradePoint;
    }

    float GPA = totalQualityPoints / totalCredits;

    printf("\n-----------------------------\n");
    printf(" Total Quality Points: %.2f\n", totalQualityPoints);
    printf(" Total Credits: %.2f\n", totalCredits);
    printf(" Your Semester GPA: %.2f\n", GPA);
    printf("-----------------------------\n");

    return 0;
}
