#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a[7];
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a[i]);
	}
	int min = 100;
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		if (a[i] % 2 != 0) {
			sum += a[i];
			if (a[i] < min) min = a[i];
		}
	}
	if (sum == 0) printf("-1");
	else {
		printf("%d\n%d", sum, min);

	}
}