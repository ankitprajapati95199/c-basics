#include <stdio.h>

int main()
{
    int total, hrs, min, sec;

    printf("Enter total seconds: ");
    scanf("%d", &total);

    hrs = total / 3600;
    min = (total % 3600) / 60;
    sec = total % 60;

    printf("Time = %d hours, %d minutes, %d seconds\n",
           hrs, min, sec);

    return 0;
}
