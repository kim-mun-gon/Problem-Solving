#include <stdio.h>

void sort(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size-1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++)
        sum += arr[i];
    
    printf("%d\n%d", sum/5, arr[2]);
}
int main(void)
{
    int arr[5];

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    
    sort(arr, sizeof(arr)/sizeof(int));

    return 0;
}