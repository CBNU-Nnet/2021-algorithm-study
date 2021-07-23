#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b + c != 180) printf("Error");
	else {
		if (a == b || b == c || c == a) {
			if (a == 60 && b == 60 && c == 60) printf("Equilateral");
			else printf("Isosceles");
		}
		else printf("Scalene");
	}
}
