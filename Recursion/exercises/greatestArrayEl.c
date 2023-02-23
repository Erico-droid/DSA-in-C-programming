// Write a program in C to get the largest element of an array using recursion. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 5
// element - 1 : 10
// element - 2 : 15
// element - 3 : 20
// element - 4 : 25
// Expected Output :

// Largest element of an array is: 25 
#include<stdio.h>

int greatestEl(int *arr, int size) {
    printf("\n %d \n ", size);
    static int great = 0;
    if (size <= 0)
        return great;
    else {
        if (arr[size] > great)
            great = arr[size];
        greatestEl(arr, size - 1);
    }
}

int main() {
    int ar[] = {5, 10, 30, 15, 20, 25};
    int num = greatestEl(ar, 5);
    printf("%d", num); 
    return 0;
}