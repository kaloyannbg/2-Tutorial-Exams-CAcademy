#include <stdio.h>

int main() {

    double dOunces = 0;
    int iGlass = 0;
    int iRemainder = 0;

    printf("\n\n -- NOTE: 8 ounces is 1 glass");
    printf("\n -- Enter how much ounces you want: ");

    scanf("%lf", &dOunces);

    iRemainder = (int)dOunces % 8;

    iGlass = dOunces / 8;

    printf("\n -- You have %.2f ounces and get %d glass ", dOunces, iGlass);

    if(iRemainder != 0) {

        printf("\n -- You have %d free ounces", iRemainder);
    }

    return 0;
}
