#include <stdio.h>

void printMenu(void);
void BGNconvert(void);
void EURconvert(void);
void USDconvert(void);


double dBGN = 0;
double dEUR = 0;
double dUSD = 0;

int main() {

    int iChoice = 0;

    do {

        printMenu();

        scanf("%d", &iChoice);

        switch (iChoice)
        {
        case 1: BGNconvert();
        break;
        case 2: EURconvert();
        break;
        case 3: USDconvert();
        break;
        case 0: printf(" -- See you later.\n");

        default: printf(" !! Please, enter valid choice !!");
            break;
        }


    } while (iChoice != 0);


    return 0;
}

void printMenu(void) {

    printf(" -- Menu --\n");
    printf(" -- Enter 1 for convert from BGN to USD and EUR \n");
    printf(" -- Enter 2 for convert from EUR to USD and BGN \n");
    printf(" -- Enter 3 for convert from USD to EUR and BGN \n");
    printf(" -- Please, enter your choice: \n");

}

void BGNconvert(void) {

    printf("Please, enter your amount in BGN: ");
        scanf("%lf", &dBGN);
        if(dBGN < 0) {
             printf("Please enter valid amount.");
        }
        else
        {
             double dTotalInEUR = dBGN * 0.51129188;
             double dTotalInUSD = dBGN * 0.59293029;
             printf("-- -- %.2f BGN is %.2f EUR \n",dBGN, dTotalInEUR);
             printf("-- -- %.2f BGN is %.2f USD \n",dBGN, dTotalInUSD);
        }

}

void EURconvert(void) {

    printf("Please, enter your amount in EUR: ");
        scanf("%lf", &dEUR);
        if(dEUR < 0) {
             printf("Please enter valid amount.");
        }
        else
        {
             double dTotalInBGN = dEUR * 1.95583;
             double dTotalInUSD = dEUR * 1.1596709;
             printf("-- -- %.2f EUR is %.2f BGN \n",dEUR, dTotalInBGN);
             printf("-- -- %.2f EUR is %.2f USD \n",dEUR, dTotalInUSD);
        }

}

void USDconvert(void) {
    printf("Please, enter your amount in USD: ");
        scanf("%lf", &dUSD);
        if(dUSD < 0) {
             printf("Please enter valid amount.");
        }
        else
        {
             double dTotalInBGN = dUSD * 1.6865389;
             double dTotalInEUR = dUSD * 0.86231365;
             printf("-- -- %.2f EUR is %.2f BGN \n",dUSD, dTotalInBGN);
             printf("-- -- %.2f EUR is %.2f USD \n",dUSD, dTotalInEUR);
        }
}
