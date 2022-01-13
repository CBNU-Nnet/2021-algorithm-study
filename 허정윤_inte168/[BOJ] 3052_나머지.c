#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int re[10];
    for (int i = 0; i < 10; i++) {
        re[i] = arr[i] % 42;
    }
    //무식한 방식.
    int count = 0;
    for (int i = 0; i < 42; i++) {
        for (int j = 0; j < 10; j++) {
            if (re[j] == i) {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
}