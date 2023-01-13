#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Compare(const void* first, const void* second)
{
    char* word1 = (char *)first;
    char* word2 = (char *)second;
    
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if(len1 > len2)
        return 1;
    else if(len1 < len2)
        return -1;
    else
        return strcmp(word1, word2);
}
int main(void)
{
    int n;
    char word[20000][51];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%s", &word[i]);

    qsort(word, n, 51 * sizeof(char), Compare);

    printf("%s\n", word[0]);

    for(int i = 1; i < n; i++)
    {
        if(strcmp(word[i-1], word[i]))
            printf("%s\n", word[i]);
    }
    return 0;
}