#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int base = 1, exponent, i, result = 1;
	printf("두 양의 정수를 입력하세요: ");
	scanf("%d %d", &base, &exponent);
	for (i = 0; i < exponent; i++) {
		result *= base;
	}

	printf("%d^%d=%d", base, exponent, result);
}