//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month == 4)
    {
        printf("%02d-Apr-%d", day, year);
    }
    else
    {
        printf("Invalid month");
    }

    return 0;
}