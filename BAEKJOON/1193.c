#include <stdio.h>

int main(void)
{
    int n, cnt = 1;
    scanf("%d", &n);

    while(1)
    {
        if(cnt*(cnt-1)/2 < n && n <= (cnt+1)*cnt/2)
            break;
        cnt++;
    }

    if(cnt % 2 != 0)
    {
        int result = cnt*(cnt+1) / 2;
        printf("%d", (result-n)+1);
        printf("/");
        printf("%d", cnt-(result-n));
    }
    else{
        int result = cnt*(cnt+1) / 2;
        printf("%d", cnt-(result-n));
        printf("/");
        printf("%d", (result-n)+1);
    }
    return 0;
}