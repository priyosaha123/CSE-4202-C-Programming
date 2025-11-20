#include <stdio.h>
int main()
{
    int arr[4][3];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter no. %d airspeed:\n ", i + 1);
        scanf("%d", &arr[i][0]);

        printf("Enter no. %d ALtitude: \n", i + 1);
        scanf("%d", &arr[i][1]);

        printf("Enter no. %d Temperature:\n ", i + 1);
        scanf("%d", &arr[i][2]);
    }
    printf("TEST DATA: \n");
    printf("+-----+----------+----------+-----+\n");
    printf("|Time | Airspeed | Altitude |Temp |\n");
    printf("+-----+----------+----------+-----+\n");

    for (int i = 0; i < 5; i++)
    {
        printf("| %-3d | %-8d | %-8d | %-3d |\n", i + 1, arr[i][0], arr[i][1], arr[i][2]);
    }
    printf("+-----+----------+----------+-----+\n");
    float Sum_Airspeed = 0, Sum_altitude = 0, Sum_Temp = 0;
    for (int i = 0; i < 5; i++)
    {
        Sum_Airspeed += arr[i][0];
        Sum_altitude += arr[i][1];
        Sum_Temp += arr[i][2];
    }
    float Ave_Airspeed, Ave_Alti, Ave_Temp;
    Ave_Airspeed = Sum_Airspeed / 5;
    Ave_Alti = Sum_altitude / 5;
    Ave_Temp = Sum_Temp / 5;
    printf("The Average Airspeed is :%.2f", Ave_Airspeed);
    printf("The Average Altitude is :%.2f", Ave_Alti);
    printf("The Average Temperature is :%.2f", Ave_Temp);

    return 0;
}
