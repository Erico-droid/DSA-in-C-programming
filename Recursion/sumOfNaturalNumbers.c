#include<stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    if (n > 0) {
        return sum(n-1) + n;
    }
}

int loopSum(int n) {
    int i = 0;
    int fin = 0;
    for (i = 0; i <= n; i++) {
        fin = fin + i;
    }
    return fin;
}

int sum2(int n) {
    return n * (n+1)/2;
}

int main() {
    int x;
    x = loopSum(10);
    printf("\n%d\n", x);
    return 0;
}