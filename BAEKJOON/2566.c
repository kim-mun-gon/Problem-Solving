#include <stdio.h>

int main(void)
{
    int arr[9][9];
    int max = 0;

    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            scanf("%d", &arr[i][j]);
    
    max = arr[0][0];

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(arr[i][j] == max)
            {
                printf("%d\n", max);
                printf("%d %d\n", i+1, j+1);
            }
        }
    }
    return 0;
}