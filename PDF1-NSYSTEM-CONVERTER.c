#include <stdio.h>
#include <math.h>

void printMenu(void);
int fromDecToBase(int number, int base);
int fromBaseToDec(int number, int base);
void fromDecToHex(int number);

int iHexDigits[50];

int  i = 0, iLength = 0;

    int iChoice = 0;

    int iNumber = 0;

    int iBase = 0;

int main() {

    do {

        iNumber = 0;

        iBase = 0;

        printMenu();

        scanf("%d", &iChoice);

        switch (iChoice)
        {
        case 1:
        printf("\n -- Enter your number in Decimal ");
         scanf("%d", &iNumber);
         iNumber = abs(iNumber);
         printf("\n -- Enter your base ");
         scanf("%d", &iBase);
         iBase = abs(iBase);

         printf("\n -- Your number %d is: %d(%d) --",iNumber, fromDecToBase(iNumber, iBase), iBase);
         break;

         case 2:
        printf("\n -- Enter your base (Number system): ");
         scanf("%d", &iBase);
         iBase = abs(iBase);
         printf("\n -- Enter your number in base(%d) number system: ", iBase);
         scanf("%d", &iNumber);
         iNumber = abs(iNumber);
         printf("\n -- Your number in DEC is: %d --", fromBaseToDec(iNumber, iBase));
         break;
         case 3:
         printf("\n -- Enter your decimal number: ");
         scanf("%d", &iNumber);
         iNumber = abs(iNumber);
         printf("\n -- Your number in HEX is: ");
         fromDecToHex(iNumber);
         break;

         case 0: printf("\n -- Bye Bye!");
        break;
        default: printf("\n\n !! Please enter valid choice. !!");
            break;
        }

    } while(iChoice != 0);



    return 0;
}

void printMenu(void) {
    printf("\n\n -- Enter 1 for convert from Decimal to base.");
    printf("\n -- Enter 2 for convert from base to Decimal");
    printf("\n -- Enter 3 for convert from Decimal to Hex");
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

int fromBaseToDec(int binaryNumber, int base) {

    int tempNumber = binaryNumber;

    int remainder = 0;

    int result = 0;

    int i = 0;

    for(i = 0; tempNumber > 0; i++) {

        remainder = tempNumber % 10;

        result = result + ( remainder * pow(base, i) );

        tempNumber = tempNumber / 10;

    }

    return result;

}

void fromDecToHex(int number) {

    i = 0;
    iLength = 0;

    while(number > 0) {

        iHexDigits[i] = number % 16;
        number = number / 16;
        i++;
        iLength++;
    }
    printf("0x");
    for(i = iLength-1; i >= 0; i--) {
        if(iHexDigits[i] == 10) {
            printf("A");
        } else if(iHexDigits[i] == 11) {
            printf("B");
        } else if(iHexDigits[i] == 12) {
            printf("C");
        } else if(iHexDigits[i] == 13) {
            printf("D");
        } else if(iHexDigits[i] == 14) {
            printf("E");
        } else if(iHexDigits[i] == 15) {
            printf("F");
        } else {
            printf("%d", iHexDigits[i]);
        }
    }

}
