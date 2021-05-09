#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*for문을 이용한 구구단 출력하기*/

int main() {
    int i, n;
    printf("출력할 구구단의 단을 입력하시오: ");
    scanf("%d", &n);
    for (i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
