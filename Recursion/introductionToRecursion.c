#include<stdio.h>

// int fun(int num) {
//     if (num > 0) {
//         printf("%d", num);
//         fun(num - 1);
//     }
//     return num;
// }

// int main() {

//     int x = fun(5);
//     printf("%d", x);

//     return 0;
// }

void fun2(int n, int m) {
    if (n > 0) {
        fun2(n - 1, m + n);
        // m += n;
        printf("\nm: %d, n: %d\n", m, n);
    }
}

int main () {

    int x = 3;
    int y = 0;
    fun2(x, y);

    return 0;
}