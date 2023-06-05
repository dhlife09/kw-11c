#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int height;
    printf("삼각형의 높이를 입력하세요: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {
        for (int k = 0; k < height - 1 - i; k++) {
            printf(" ");
        }
        for (int n = 0; n < 2*i + 1; n++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
