#include <stdio.h>

void est(int n)
{
    int arr[246913] = {0};
    int cnt = 0;
    for(int i = 2; i <= 2*n; i++)
        arr[i] = i;
    
    for(int i = 2; i <= 2*n; i++)
    {
        if(arr[i] == 0)
            continue;
        for(int j = i+i; j <= 2*n; j+=i)
            arr[j] = 0;
    }

    for(int i = n+1; i <= 2*n; i++)
    {
        if(arr[i] != 0)
            cnt++;
    }
    printf("%d\n", cnt);
}
int main(void)
{
    int n;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        est(n);
    }
}