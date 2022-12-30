#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000001];
    int alpt[26] = {0, };
    int max, cnt = 0, len; 
    int result = 0;

    scanf("%s", word);
    len = strlen(word);

    for(int i = 0; i < len; i++)
    {
        if(word[i] < 'a')
            alpt[word[i] - 'A']++;
        else
            alpt[word[i] - 'a']++;
    }

    max = alpt[0];

    for(int i = 1; i < 26; i++)
    {
        if(max < alpt[i])
        {
            max = alpt[i];
            result = i;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(max == alpt[i])
            cnt++;
    }

    if(cnt > 1)
        printf("?\n");
    else 
        printf("%c", result + 'A');

    return 0;
}