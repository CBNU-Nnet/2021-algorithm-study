#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fifo(int num);

int main() {
    int n=0;
    scanf("%d", &n);
    printf("%d", fifo(n));
}

int fifo(num) {
    if (num == 1 || num == 2) return 1;
    return fifo(num - 1) + fifo(num - 2);
}
