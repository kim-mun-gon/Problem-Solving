#include <stdio.h>

int main(void)
{
    int arr[9];
    int index =0;
    int max = 0;

    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if(max < arr[i])
        {
            max = arr[i];
            index = i+1;
        }
    }
    printf("%d\n%d", max, index);
    return 0;
}