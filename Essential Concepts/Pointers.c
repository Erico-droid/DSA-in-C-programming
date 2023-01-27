//Pointers rem crash course

#include<stdio.h>
#include<stdlib.h>

int main() {

    // int a = 10;

    // int *p;

    // p = &a;

    // *p = 20;

    // printf("\n%d\n", a);

    int *p;

    p = (int*)malloc(sizeof(int) * 5); //This is stored in the heap memory

    return 0;
}

