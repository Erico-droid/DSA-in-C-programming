 
#include<stdio.h>
#include<stdlib.h>

typedef struct rectangle {
    int length;
    int breadth;
}Rectangle;


int main() {
    // Rectangle rect = {2,3};
    // Rectangle *ptr;
    // ptr = &rect; 

    // ptr -> length = 20; //or you can use (*ptr).length = 20;
    // ptr -> breadth = 50; //or you can use (*ptr).breadth = 20;

    //Dynamic Allocation
    Rectangle *ptr;
    ptr = (Rectangle*)malloc(sizeof(Rectangle));
    // printf("%d", sizeof(ptr));

    ptr -> length = 20; 
    ptr -> breadth = 10;
    
    return 0;
}