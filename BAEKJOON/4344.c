#include <stdio.h>

int main(void)
{
    int c, n;

    scanf("%d", &c);

    for(int i = 0; i < c; i++)
    {
        scanf("%d", &n);
        int score[1000], sum = 0;
        double avg = 0.00;

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }

        avg = (double)sum / n;
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(score[j] > avg)
                count++;
        }
        printf("%.3lf%%\n", (double)count*100/n);
    }
    return 0;
}