#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Compare(const void* first, const void* second)
{
    int* elem1 = (int*) first;
    int* elem2 = (int*) second;

    if(*elem1 > *elem2)
        return 1;
    else if(*elem1 < *elem2)
        return -1;
    else
        return 0;
}

int Mode(int arr[], int size)
{
    int mode[8001] = { 0 };
    int idx = 0, max = 0, cnt = 0;
    for(int i = 0; i < size; i++)
    {
        idx = arr[i] + 4000;
        mode[idx] += 1;
        if(mode[idx] > max)
            max = mode[idx];
    }
    for(int i = 0; i < 8001; i++)
    {
        if(mode[i] == 0)
            continue;
        
        if(mode[i] == max)
        {
            if(cnt == 0)
            {
                idx = i;
                cnt += 1;
            }
            else if(cnt == 1)
            {
                idx = i;
                break;
            }
        }
    }
    return idx - 4000;
}

int main(void)
{
    int n, result = 0;
    int *arr;
    double sum = 0;
    
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    qsort(arr, n, sizeof(int), Compare);

    for(int i = 0; i < n; i++)
        sum += arr[i];

    int mode = Mode(arr, n);
    result = round(sum/n);

    printf("%d\n", result);
    printf("%d\n", arr[n/2]);
    printf("%d\n", mode);
    printf("%d\n", arr[n-1]-arr[0]);

    return 0;
}