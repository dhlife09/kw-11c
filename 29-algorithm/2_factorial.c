#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number, i, result=1;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &number);

    for (i=number; i > 0; i--) {
        result *= i;
    }

    printf("%d!=%d", number, result);

    return 0;
}
