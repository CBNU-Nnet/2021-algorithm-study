#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*for���� �̿��� ������ ����ϱ�*/

int main() {
    int i, n;
    printf("����� �������� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);
    for (i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
