// Write a program in C to count the digits of a given number using recursion. Go to the editor
// Test Data :
// Input a number : 50
// Expected Output :


#include<stdio.h>

int noOfDigits(int n) {
    static int ctr = 0;
    if (n != 0){
        ctr++;
        noOfDigits(n/10);
    }
    return ctr;
}

int main() {
    int no = noOfDigits(5001);
    printf("\n %d \n", no);
    return 0;
}