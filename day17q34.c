/*
Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
#include <stdbool.h>
int main() {
    int number;
    bool is_prime = true;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = false; 
                break;
            }
        }
    }
    
    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    
    return 0;
}