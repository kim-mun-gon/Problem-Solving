#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, count;
    char word[100];

    scanf("%d", &n);
    count = n;
    for(int i = 0; i < n; i++)
    {
        scanf("%s", word);
        int alpt[26] = {0, };

        int len = strlen(word);
        for(int j = 0; j < len; j++)
        {
            if(word[j] != word[j+1])
                alpt[word[j] -'a'] += 1;
        }
        for(int j = 0; j < 26; j++)
        {
            if(alpt[j] > 1)
            {
                count--;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}