#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];
    int alpt[26];

    scanf("%s", word);

    for(int i = 0; i < 26; i++)
        alpt[i] = -1;

    for(int i = 0; i < strlen(word); i++)
    {
        int location = word[i] - 'a';
        if(alpt[location] == -1)
            alpt[location] = i;
        else
            continue;
    }

    for(int i = 0; i < 26; i++)
        printf("%d ", alpt[i]);

    return 0;
}