#include <stdio.h>

int main(void)
{
    int h, m;
    int time = 45;

    scanf("%d %d", &h, &m);

    if(m < 45)
    {
        h = h - 1;
        m = 60 + m - time;
        if(h < 0){
            h = 24 - 1;
        }
    }
    else{
        m = m - 45;
    }

    printf("%d %d", h, m);

    return 0;
}