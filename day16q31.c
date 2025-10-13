/*
Q31: Write a program to take a number as input and print its equivalent binary representation.
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main() {
    int number;
    int binary[32]; // Array to store binary digits
    int index = 0; // Index for the binary array
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    
    while (number > 0) {
        binary[index] = number % 2; // Store the remainder (0 or 1)
        number = number / 2; // Update number by dividing by 2
        index++;
    }
    
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) { // Print in reverse order
        printf("%d", binary[i]);
    }
    printf("\n");
    
    return 0;
}