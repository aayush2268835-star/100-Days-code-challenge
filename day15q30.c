/*
Q30: Write a program to reverse a given number.
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
int main() {
    int number, reversed = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
        int digit = number % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        number /= 10; // Remove the last digit from the original number
    }
    
    printf("Reversed number is: %d\n", reversed);
    
    return 0;
}