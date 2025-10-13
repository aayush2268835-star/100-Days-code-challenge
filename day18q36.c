/*
Q36: Write a program to find the HCF (GCD) of two numbers.
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>
int main() {
    int num1, num2, hcf;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    
    return 0;
}