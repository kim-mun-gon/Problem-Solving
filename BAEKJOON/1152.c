#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000001];
    int count = 0, len;

    scanf("%[^\n]s", word);

    len = strlen(word);

    for(int i = 0; i < len; i++)
    {
        if(word[i] == ' ')
            count++;
    }

    if(word[0] == ' ' && word[len-1] == ' ')
        count -= 2;
    else if(word[0] == ' ')
        count -= 1;
    else if(word[len - 1] == ' ')
        count -= 1;

    printf("%d", count+1);
    return  0;
}