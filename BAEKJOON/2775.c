#include <stdio.h>

void result_pe(int k, int n)
{
    int arr[15];
    int result = 0;

    for (int i = 1; i < 15; i++)
        arr[i] = i;

    for (int i = 1; i <= k; i++)
    {
        arr[1] = 1;
        for (int j = 1; j <= n; j++)
        {
            if (j == 1)
                result = 1;
            else
            {
                result += arr[j];
                arr[j] = result;
            }
        }
    }
    printf("%d\n", result);
}

int main(void)
{
    int T;
    int k, n;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &k);
        scanf("%d", &n);
        result_pe(k, n);
    }
    return 0;
}