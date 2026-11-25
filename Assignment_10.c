
#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year, days, startDay;
    int month, day, i;

    char *months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Enter year: ");
    scanf("%d", &year);

    if (year < 1) {
        printf("Invalid year!\n");
        return 0;
    }

    // Check leap year
    if (isLeapYear(year))
        monthDays[1] = 29;

    // Calculate starting day (0 = Sunday)
    startDay = 1;
    for (i = 1; i < year; i++) {
       if (isLeapYear(i)){startDay = startDay + 366;}
        else{startDay = startDay + 365;}
    }
    startDay %= 7;

    // Print calendar month by month
    for (month = 0; month < 12; month++)
    {
        printf("\n\n       %s %d\n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        // Print leading spaces
        for (i = 0; i < startDay; i++)
            printf("    ");

        days = monthDays[month];

        // Print dates
        for (day = 1; day <= days; day++)
        {
            printf("%4d", day);

            if ((startDay + day) % 7 == 0)
                printf("\n");
        }

        printf("\n");

        // Calculate starting day of next month
        startDay = (startDay + days) % 7;
    }

    return 0;
}
