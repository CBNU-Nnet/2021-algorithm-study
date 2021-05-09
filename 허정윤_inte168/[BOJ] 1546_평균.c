#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N;
	static float sum = 0;
	scanf("%d", &N);
	int a[100];
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	static int a_max = 0;
	for (int i = 0; i < N; i++) {
		if (a_max < a[i]) a_max = a[i];
	}

	for (int i = 0; i < N; i++) {
		sum += (float)a[i] ;
	}
	printf("%.4f\n", sum / a_max * 100 / N);
}