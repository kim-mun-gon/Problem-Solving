#include <stdio.h>

int main(void)
{
    double arr[1000];
    int cnt;
    int max = 0;
    double result = 0;

    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++)
    {
        scanf("%lf", &arr[i]);
        if(max < arr[i])
            max = arr[i];
    }

    for(int i = 0; i < cnt; i++)
    {
        arr[i] = arr[i] / max * 100;
        result += arr[i];
    }

    printf("%lf", result/cnt);
    return 0;
}