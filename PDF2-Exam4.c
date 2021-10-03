#include <stdio.h>

int addDigit(int firstNumber, int secondNumber);

int main() {

    int iNumber = 0; int iNumberTwo = 0;

    iNumber = 1, iNumberTwo = 4;

    printf("%d + %d = %d", iNumber, iNumberTwo, addDigit(iNumber, iNumberTwo));

    return 0;
}

int addDigit(int firstNumber, int secondNumber) {

    int result = firstNumber + secondNumber;

    return result;

}
