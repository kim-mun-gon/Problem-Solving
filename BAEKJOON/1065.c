#include <stdio.h>

void han(int n)
{
    int cnt = 99;
    int fir, sec, third;

    if (n < 100)
        printf("%d", n);
    else
    {
        for (int i = 100; i <= n; i++)
        {
            fir = i / 100;
            sec = (i % 100) / 10;
            third = i % 10;

            if ((third - sec) == (sec - fir))
                cnt++;
        }
        printf("%d", cnt);
    }
}
int main(void)
{
    int n;

    scanf("%d", &n);
    han(n);
    return 0;
}