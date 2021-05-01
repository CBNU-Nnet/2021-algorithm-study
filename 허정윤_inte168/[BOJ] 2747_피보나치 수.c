#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void fibo(int);

int main() {
	int num;
	scanf("%d", &num);
	fibo(num);
}

void fibo(num) {
	int f1 = 0;
	int f2 = 1;
	for (int i = 0; i < num-1; i++) {
		int ne = f1 + f2;
		f1 = f2;
		f2 = ne;
	}
	printf("%d", f2);
}