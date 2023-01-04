#include <stdio.h>

void est(int n)
{
    int arr[10000];
    int div[10000];
    int cnt = 0;
    for(int i = 2; i <= n; i++)
        arr[i] = i;
    
    for(int i = 2; i <= n; i++)
    {
        if(arr[i] == 0)
            continue;
        for(int j = i+i; j <= n; j+=i)
            arr[j] = 0;
    }

    for(int i = n/2; i >= 2; i--)
    {
        if(arr[i] + arr[n-i] == n)
        {
            printf("%d %d\n", i, n-i);
            break;
        }
    }
}
int main(void)
{
    int t, n;

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        est(n);
    }
    return 0;
}