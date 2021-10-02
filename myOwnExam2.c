#include <stdio.h>

int main() {

    double dSeconds = 0;

    printf(" -- Enter your seconds on earth: \n");

    scanf("%lf", &dSeconds);

    double dYears = dSeconds / 60 / 60 / 24 / 365;

    printf("Your second in earth year is: %f\n", dYears);

    double dJupYears = dYears / (365 * 12);

    printf("Your seconds in jupiter years is: %f\n", dJupYears);

    return 0;
}
