#include <stdio.h>

int main() {

    float fEarthDays = 0;

    float fJupiterYears = 0;

    float fEarthYears = 0;

    float fJupiterYearsInSeconds = 0;

    printf("\n\n -- Convert earth days to jupiter years. -- ");

    printf("\n\n -- Enter earth days: ");

    scanf("%f", &fEarthDays);

    fJupiterYears = fEarthDays / (365 * 12); // jupiterY = 365 / (365*12) earth years jupiterY = 0.083333

    fJupiterYearsInSeconds = fJupiterYears * 31556926;

    printf("\n\n -- %.2f earth days in jupiter is: %f years.", fEarthDays, fJupiterYears );

    printf("\n\n -- %.2f jupiter years in seconds is: %f earth seconds.", fJupiterYears, fJupiterYearsInSeconds );

    return 0;
}
