#include <stdio.h>

int main() {

    double dYears = 0;

    printf("\n -- Please enter your ages: ");

    scanf("%lf", &dYears);

    double dYearInDays = dYears * 365;

    double dYearsInHours = dYearInDays * 24;

    double dYearsInMinutes = dYearsInHours * 60;

    double dYearsInSeconds = dYearsInMinutes * 60;

    double dJupiterYearInSeconds = 378432000; //12 earth years in seconds

    double dYearsOnJupiterInSeconds = dJupiterYearInSeconds * dYearsInSeconds; //1 jupiter year = 12 earth years


    printf("\n -- %.2f years in days is: %f --", dYears, dYearInDays);
    printf("\n -- %.2f years in hours is: HOURS:%f --", dYears, dYearsInHours);
    printf("\n -- %.2f years in minutes is: MINUTES:%f --", dYears, dYearsInMinutes);
    printf("\n -- %.2f years in minutes is: SECONDS:%f --", dYears, dYearsInSeconds);
    printf("\n -- %.2f years in seconds on Jupiter is: SECONDS: %f ", dYears, dYearsOnJupiterInSeconds);



    return 0;
}
