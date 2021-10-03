#include <stdio.h>

int main() {

    float fEarthDays = 0; //Get earth days from user

    float fEarthYears = 0;

    float fJupiterYears = 0;
  
    printf("Please, enter earth days: ");
  
    scanf("%f", &fEarthDays);

    fEarthYears = fEarthDays / 365; // Earth days on Earth years

    fJupiterYears = fEarthYears / 12; // Jupiter years is , Earth years / 1 jupiter year;

    printf(" -- %.0f earth days is %.10f years in jupiter", fEarthDays, fJupiterYears);

    return 0;
}
