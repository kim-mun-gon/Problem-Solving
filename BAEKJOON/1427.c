#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Compare(const void* first, const void* second)
{
    int* elem1 = (int*) first;
    int* elem2 = (int*) second;

    if(*elem1 > *elem2)
        return -1;
    else if(*elem1 < *elem2)
        return 1;
    else   
        return 0;
}

int main(void)
{
    char word[10000];
    int len = 0;
    int *arr;
    scanf("%s", &word);
    len = strlen(word);

    arr = (int*)calloc(len, sizeof(int));

    for(int i = 0; i < len; i++)
        arr[i] = word[i] - '0';
    
    qsort(arr, len, sizeof(int), Compare);

    for(int i = 0; i < len; i++)
        printf("%d", arr[i]);

    return 0;
}