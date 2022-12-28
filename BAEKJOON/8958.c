#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];
    int n, sum, add;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        sum = 0, add = 0;
        scanf("%s", str);
        for(int j = 0; j < strlen(str); j++)
        {
            if(str[j] == 'O')
                add += 1;
            else
                add = 0;
            sum += add;
        }
        printf("%d\n", sum);
    }
    return 0;
}