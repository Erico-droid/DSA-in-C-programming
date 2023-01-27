//struct

#include<stdio.h>

typedef struct rectangle {
    int length;
    int breadth;
}Rectangle;


// Complex number 
// A complex number is a number of the form a + bi, 
// where a and b are real numbers ; 
// This way, a complex number is defined as a polynomial ; Formally ...

typedef struct complex {
    int real;
    int imaginary;    
}Complex;

typedef struct student {
    int roll;
    char name[25];
    char dept[10];
    char address[50];
}Student;

//playing card struct
typedef struct card {
    int face;
    int shape;
    int color;
}Card;

int main() {
    Rectangle rect;
    Student std;
    Card deck[52] = {{1,0,0}, {2,0,0}};
    rect.length = 10;
    rect.breadth = 5;
    printf("\n%d\n", deck[0].face);
    int size = sizeof(deck);
    printf("\n%d\n", size);
    return 0;
}