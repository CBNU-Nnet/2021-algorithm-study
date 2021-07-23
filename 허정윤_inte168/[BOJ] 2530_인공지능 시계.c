#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int h=0, m=0, s=0;
	int c;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &c);
	h += c / 3600;
	m += (c % 3600) / 60;
	s += (c % 60);
	if (s >= 60) {
		m += s / 60;
		s = s % 60;
	}
	if (m >= 60) {
		h += m / 60;
		m = m % 60;
	}
	if (h >= 24) {
		h = h % 24;
	}
	printf("%d %d %d", h, m, s);
}
