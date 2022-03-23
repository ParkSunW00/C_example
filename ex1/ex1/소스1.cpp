#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x;
	int y;

	printf("숫자입력:");
	scanf("%d", &x);
	y = x + 100;

	printf("%d", y);

	return 0;
} 