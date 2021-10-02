#include <stdio.h>

int main() {

    double dWeight = 0, dWeightOnTheMoon = 0;

    printf("-- \n\n -- Enter your weight on the earth: "); //User weight on the earth

    scanf("%lf", &dWeight);

    dWeightOnTheMoon = (dWeight * 17) / 100;

    printf("\n -- Your weight on the moon is: %.2f", dWeightOnTheMoon);

    return 0;
}
