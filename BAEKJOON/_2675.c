#include <stdio.h>
#include <string.h>

int main(void)
{
    int t, n;
    char word[20];

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d %s", &n, word);

        for(int j = 0; j < strlen(word); j++)
            for(int z = 0; z < n; z++)
                printf("%c", word[j]);
        printf("\n");        
    }

    return 0;
}