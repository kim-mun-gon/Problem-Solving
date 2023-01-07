#include <stdio.h>

void sort(int arr[], int n, int k)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d", arr[k-1]);
}
int main(void)
{
    int n , k;
    int arr[10000];

    scanf("%d %d", &n, &k);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    sort(arr, n, k);

    return 0;
}