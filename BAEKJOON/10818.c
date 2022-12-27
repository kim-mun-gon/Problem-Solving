#include <stdio.h>
#define SIZE 1000000

int main(void)
{
    int arr[SIZE];
    int n, max, min;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    max =  arr[0];
    min =  arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("%d %d", min, max);
    return 0;
}