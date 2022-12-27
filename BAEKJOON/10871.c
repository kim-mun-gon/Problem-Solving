#include <stdio.h>

int main(void)
{
    int arr[100];
    int cnt, n;

    scanf("%d %d", &cnt, &n);

    for(int i = 0; i < cnt; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 0; i < cnt; i++)
    {
        if(arr[i] < n)
            printf("%d ", arr[i]);
    }

    return 0;
}