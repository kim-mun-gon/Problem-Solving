#include <stdio.h>

int main(void)
{
    int a, b, c;
    int h, m;

    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    h = a;
    m = b + c;

    if (m >= 60)
    {
        h = h + m / 60;
        m = m % 60;
        if(h >= 24)
            h = h - 24;
    }
    
    printf("%d %d", h, m);
    return 0;
}