
// 온라인저지 1086

#if 0
#include <stdio.h>

int main(void)
{
    int a, i, sum = 0;

    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}
#endif


#include <stdio.h>

int main(void)
{
    int a, i=0, sum = 0;

    scanf("%d", &a);

    while (i<=a) {
        sum += i;
        i += 2;
    }


    printf("%d", sum);
    return 0;
}