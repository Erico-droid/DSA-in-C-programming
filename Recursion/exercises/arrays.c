//  Write a program in C to print the array elements using recursion. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :6
// Input 6 elements in the array :
// element - 0 : 2
// element - 1 : 4
// element - 2 : 6
// element - 3 : 8
// element - 4 : 10
// element - 5 : 12
// Expected Output :

// The elements in the array are : 2  4  6  8  10  12 


#include<stdio.h>

void printArray(int * arr,int size) {
    static int x = 0;
    if (size >= 0){
        printArray(arr, size - 1);
        printf("\n %d", arr[size]);
    }
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(array)/sizeof(int);
    printArray(array, size - 1);
    return 0;
}