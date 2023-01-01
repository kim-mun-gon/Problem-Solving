#include <stdio.h>

int main(void)
{
    int n;
    int start = 1;
    int cnt = 1;
    scanf("%d", &n);

    while(1)
    {
        if(start >= n)
            break;
        start += (cnt*6);
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}