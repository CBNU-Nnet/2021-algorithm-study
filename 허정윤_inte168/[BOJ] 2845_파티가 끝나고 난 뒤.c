#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int L, P;
	scanf("%d %d", &L, &P);
	int a[5];
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	int num = L * P;
	for (int i = 0; i < 5; i++) {
		a[i] -= num;
		printf("%d ", a[i]);
	}
	printf("\b");
}
