#include <stdio.h>

int main(void)
{
    int m, n, cnt = 0, sum = 0;
    int arr[10000];
    scanf("%d %d", &m, &n);

    for(int i = m; i <= n; i++)
    {
        int count = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }
        if(count == 2)
        {
            arr[cnt] = i;
            cnt++;
        }
    }
    int min = arr[0];

    for(int i = 0; i < cnt; i++)
        {
            if(min > arr[i])
                min = arr[i];
            sum += arr[i];
        }

    if(cnt == 0)
        printf("-1");
    else{
      printf("%d\n%d", sum, min);
    }
    return 0;
}