#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
    int a, b, i;

    scanf("%d", &a);
    scanf("%d", &b);
    for (i = 1; i <= a; i++) {
        if (i % b == 0) {
            printf("%d ", i);
            continue;
        } 

        printf("현재의 i값은 : %d ! 안걸렸어요~\n", i);
    }
    return 0;
}