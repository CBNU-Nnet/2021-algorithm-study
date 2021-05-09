#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num[5];
	static int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		sum += num[i] * num[i];
	}
	int fin = sum % 10;
	printf("%d", fin);
}