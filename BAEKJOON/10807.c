#include <stdio.h>

int main(void)
{
    int num[100];
    int n, chk;
    int count = 0;

    scanf("%d", &n);

    for(int i = 0; i < 11; i++)
        scanf("%d", &num[i]);
        
    scanf("%d", &chk);

    for(int i = 0; i < 11; i++)
    {
        if(num[i] == chk)
            count++;
    }

    printf("%d", count);
    return 0;
}