#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int swap(int* a, int* b);

int main() {
	int a[3];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	for (int i = 0; i < 2; i++) {
		int min = i;
		for (int j = i+1; j < 3; j++) {
			if (a[min] > a[j]) min = j;
		}
		if (a[min] != a[i]){
			int tmp = a[min];
			a[min] = a[i];
			a[i] = tmp;
		}
	}
	printf("%d %d %d", a[0], a[1], a[2]);
	
}
	
