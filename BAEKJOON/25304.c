#include <stdio.h>

int main(void)
{
    int money, cnt, b_money, b_cnt;
    int sum = 0;

    scanf("%d", &money);
    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++)
    {
        scanf("%d %d", &b_money, &b_cnt);
        sum += (b_money*b_cnt);
    }

    if(money == sum)
        printf("Yes");
    else 
        printf("No");

    return 0;
}