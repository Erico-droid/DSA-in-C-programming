//  Write a program in C to Print Fibonacci Series using recursion. Go to the editor
// Test Data :
// Input number of terms for the Series (< 20) : 10
// Expected Output:

//  Input number of terms for the Series (< 20) : 10                                
//  The Series are :                                                                
//  1  1  2  3  5  8  13  21  34  55  
#include<stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 1;
    
    int res = fibonacci(n - 1) + n - 2;
    printf("%d ", res);
}

int main() {
    fibonacci(10);
    return 0;
}