/*
Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>
int main() {
    int number;
    long long product = 1; 
    int has_odd = 0; 
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
        int digit = number % 10; 
        if (digit % 2 != 0) {
            product *= digit; 
            has_odd = 1; 
        }
        number /= 10;
    }
    
    if (!has_odd) {
        product = 1; 
    }
    
    printf("Product of odd digits is: %lld\n", product);
    
    return 0;
}