#include<stdio.h>

//call by address
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// //call by reference This is available for c++ only.
// void swap2(int &x, int &y) {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

int main() {

    int a = 20;
    int b = 10;

    swap(&a, &b);

    // swap2(a, b); //passinng by reference available for c++ only

    printf("\na: %d, b: %d\n", a, b);
    return 0;
}
