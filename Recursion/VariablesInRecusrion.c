#include<stdio.h>

int fun(int n) {
    if(n > 0) {
        return fun(n - 1) + n;
    }

    return 0;
}

int x = 0; //global variable.
int fun2(int n) {
    // static int x = 0; //static variable. (It's not affected by the iteration of a function call.)
    if(n > 0) {
        x++;
        return fun2(n - 1) + x;
        // x--;
    }

    return 0;
}


int main() {

    int a = 5;
    int *j = &x;
    
    printf("\n%d\n", fun2(a));
    *j = 0;
    printf("\n%d\n", fun2(a));
    return 0;
}