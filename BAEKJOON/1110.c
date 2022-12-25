#include <stdio.h>

int main(void)
{
    int num, n_num, result;
    int cnt = 0;

    scanf("%d", &num);

    if(num < 10)
        num *= 10;
    n_num = num; //while문 안에서 이용할 num

    while (1)
    {
        result = (n_num/10) + (n_num%10);
        result = (result%10) + (n_num%10)*10;
        n_num = result;
        cnt += 1;

        if(num == n_num)
            break;
    }
    printf("%d", cnt);
    return 0;
}