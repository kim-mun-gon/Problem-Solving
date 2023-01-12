#include <stdio.h>

int main(void)
{
    int arr[10001]= {0, };
    int n, cnt;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &cnt);
        arr[cnt]++;
    }

    for(int i = 0; i < 10001; i++)
    {
        if(arr[i] == 0)
            continue;

        for(int j = 0; j < arr[i]; j++)
            printf("%d\n", i);
    }

    return 0;
}