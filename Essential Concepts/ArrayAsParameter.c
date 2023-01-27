#include<stdio.h>

void fun (int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
}

int main() {
    int a[5] = {2,4,6,8,10};

    fun(a, 5);

    return 0;
}