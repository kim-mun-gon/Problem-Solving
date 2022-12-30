#include <stdio.h>

int main(void)
{
    char word[100];
    int n, sum = 0;
    scanf("%d", &n);
    scanf("%s", word);

    for(int i = 0; i < n; i++)
        sum += word[i] - '0';

    printf("%d", sum);
    return 0;
}