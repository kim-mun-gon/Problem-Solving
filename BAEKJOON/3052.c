#include <stdio.h>

int main(void)
{
    int arr[100] = {0, };
    int n;
    int rest;
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        rest = n % 42;
        arr[rest] = arr[rest] + 1;
    }

    for(int i = 0; i < 100; i++){
        if(arr[i] != 0)
            count++;
    }

    printf("%d", count);
    return 0;
}