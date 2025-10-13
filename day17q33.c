/*
Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>
int main() {
    int number, original, sum = 0, digits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    original = number;
    
    while (original != 0) {
        digits++;
        original /= 10;
    }
    
    original = number; 
    
    
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits); 
        original /= 10;
    }
    
    if (sum == number) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}  