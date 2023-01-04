#include <stdio.h>

int main(void)
{
    int num, cnt = 0;
    int arr[100];
    
    scanf("%d", &num);

    while(num != 1)
    {
        for(int i = 2; i <= num; i++)
        {
            if(num % i == 0)
            {
                arr[cnt] = i;
                cnt++;
                num /= i;
                break;
            }
        }
    }
    
    for(int i = 0; i < cnt; i++)
        printf("%d\n", arr[i]);
    return 0;
}