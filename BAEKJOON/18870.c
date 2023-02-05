#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct
{
    int num, idx;
} point;

int Compare(const void* first, const void* second)
{
    int* elem1 = (int*)first;
    int* elem2 = (int*)second;

    if(*elem1 > *elem2)
        return 1;
    else if(*elem1 < *elem2)
        return -1;
    else
        return 0;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    point* arr = (point*)malloc(sizeof(point) * n);


    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        arr[i].idx = i; 
    }

    qsort(arr, n, sizeof(point), Compare);

    int* result = (int*)malloc(sizeof(int) * n);
    int cnt = -1, min = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i].num != min)
        {
            min = arr[i].num;
            cnt++;
        }
        result[arr[i].idx] = cnt;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}