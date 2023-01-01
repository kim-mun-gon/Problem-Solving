#include <stdio.h>

int main(void)
{
    int T;
    int H, W, N;

    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);
        int cnt = 0;
        for(int j = 1; j <= W; j++)
        {
            for(int z = 1; z <= H; z++)
            {
                cnt++;
                if(cnt == N)
                {
                    printf("%d \n", z*100+j);
                }
            }
        }
    }
    return 0;
}