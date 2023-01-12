#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Compare(const void* first, const void *second)
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

int main(void)
{
    int arr[100000];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    qsort(arr, n, sizeof(int), Compare);

    for(int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}