#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return reversed;
}

int main() {
    int number, reversedNumber;
    
    printf("Enter any number: ");
    scanf("%d", &number);
    
    reversedNumber = reverseNumber(number);
    
    printf("Reverse of %d is: %d\n", number, reversedNumber);
    
    return 0;
}