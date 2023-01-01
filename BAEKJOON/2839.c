#include <stdio.h>

int main(void)
{
    int num;
    int cnt = 0;

    scanf("%d", &num);

    while(num > 0)
    {
        if(num % 5 == 0)
        {
            num -= 5;
            cnt++;
        }
        else if(num % 3 == 0)
        {
            num -= 3;
            cnt++;
        }
        else if(num > 5)
        {
            num -= 5;
            cnt++;
        }
        else
        {
            cnt = -1;
            break;
        }
    }
    printf("%d", cnt);
}