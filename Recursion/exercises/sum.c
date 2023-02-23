// Write a program in C to calculate the sum of numbers from 1 to n using recursion. Go to the editor
// Test Data :
// Input the last number of the range starting from 1 : 5
// Expected Output:

// The sum of numbers from 1 to 5 : 
// 15

#include<stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int main() {
    int sm = sum(5);

    printf("\n %d \n", sm);
    return 0;
}