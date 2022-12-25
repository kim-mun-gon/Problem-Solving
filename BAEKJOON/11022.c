#include <stdio.h>

int main(void)
{
    int cnt, a, b;

    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }

    return 0;
}