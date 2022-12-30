#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];
    int len, count;

    scanf("%s", word);
    len = strlen(word);
    count  = strlen(word);

    for(int i = 0; i < len; i++)
    {
        if(word[i] == '=')
        {
            if(word[i-1] == 'c' || word[i-1] == 's')
                count--;
            else if(word[i-1] == 'z')
            {
                count--;
                if(word[i-2] == 'd')
                    count--;
            }
        }
        else if(word[i] == '-')
        {
            if(word[i-1] == 'c' || word[i-1] == 'd')
                count--;
        }
        else if(word[i] == 'j')
        {
            if(word[i-1] == 'l' || word[i-1] == 'n')
                count--;
        }
    }
    printf("%d", count);
    return 0;
}