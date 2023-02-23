// Write a program in C to find the sum of digits of a number using recursion. Go to the editor
// Test Data :
// Input any number to find sum of digits: 25
// Expected Output:

// The Sum of digits of 25 = 7 

#include<stdio.h>

int sumOfDigits(int num) {
    if (num == 0) 
        return 0;
    return num%10 + sumOfDigits(num/10); 
}

int main() {
    int sum = sumOfDigits(20);
    printf("\n %d \n", sum);
    return 0;
}