#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[15];
    int sum = 0, len;

    scanf("%s", word);

    len = strlen(word);

    for(int i = 0; i < len; i++)
    {
        if(word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
            sum += 3;
        else if(word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
            sum += 4;
        else if(word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
            sum += 5;
        else if(word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
            sum += 6;
        else if(word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
            sum += 7;
        else if(word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S')
            sum += 8;
        else if(word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
            sum += 9;
        else if(word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
            sum += 10;
    }

    printf("%d", sum);
    return 0;
}