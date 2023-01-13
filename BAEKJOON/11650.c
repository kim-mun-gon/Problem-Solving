#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}dot;

int Compare(const void* first, const void* second)
{
    dot* elem1 = (dot*) first;
    dot* elem2 = (dot*) second;

    if(elem1->x > elem2->x)
        return 1;
    else if(elem1->x == elem2->x)
    {
        if(elem1->y > elem2->y)
            return 1;
        else
            return -1;
    }
    else
        return -1;

}
int main(void)
{
    int n;
    scanf("%d", &n);
    dot arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, n, sizeof(dot), Compare);

    for(int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
    
    return 0;
}
