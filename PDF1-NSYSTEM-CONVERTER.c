#include <stdio.h>
#include <math.h>

//I WILL MAKE UPDATES TOMMOROW

void printMenu(void);
int fromDecToBase(int number, int base);
int fromBinToDec(int number);
int main() {

    int iChoice = 0;

    int iNumber = 0;

    int iBase = 0;

    do {

        iNumber = 0;

        iBase = 0;

        printMenu();

        scanf("%d", &iChoice);

        switch (iChoice)
        {
        case 1:
        printf("\n\n -- Enter your number in Decimal ");
         scanf("%d", &iNumber);
         iNumber = abs(iNumber);
         printf("\n\n -- Enter your base ");
         scanf("%d", &iBase);
         iBase = abs(iBase);

         printf("\n -- Your number %d is: %d(%d) --",iNumber, fromDecToBase(iNumber, iBase), iBase);
         break;

         case 2:
        printf("\n\n -- Enter your number in Binary: ");
         scanf("%d", &iNumber);
         iNumber = abs(iNumber);
         printf("\n -- Your number in DEC is: %d --", fromBinToDec(iNumber));
         break;

        default: printf("\n\n !! Please enter valid choice. !!");
            break;
        }

    } while(iChoice != 0);



    return 0;
}

void printMenu(void) {
    printf("\n\n -- Enter 1 for convert from Decimal To what you want.");
    printf("\n -- Enter 2 for convert from Binary To Decimal");
    printf("\n -- Enter 0 for quit");
    printf("\n\n -- Please, enter your choice: ");
}

int fromDecToBase(int number, int base) {

    int tempNumber = number;

    int remainder = 0;

    int place = 1;

    int result = 0;

        while(tempNumber > 0) { // 5 (in 2)

            remainder = tempNumber % base; // 5 % 2 = 1; 2 % 2 = 0; 1 % 2 = 1;

            result = result + (place * remainder); // 1 ; 1 + (10 * 0) = 1; 1 + (100 * 1);

            tempNumber = tempNumber / base; // 5 / 2 = 2; 2 / 2 = 1; 1 / 2 = 0;

            place = place * 10; //1 * 10 ; 10 * 10 = 100; 10 * 100 = 1000;

        }

        return result;

}

int fromBinToDec(int binaryNumber) {

    int tempNumber = binaryNumber;

    int remainder = 0;

    int decimal = 0;

    int i = 0;

    for(i = 0; tempNumber > 0; i++) {

        remainder = tempNumber % 10;

        decimal = decimal + ( remainder * pow(2, i) );

        tempNumber = tempNumber / 10;

    }

    return decimal;

}
