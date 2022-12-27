#include <stdio.h>

int main(void)
{
    int member[30];
    int person;

    for(int i = 0; i < 30; i++)
        member[i] = i + 1;
    
    for(int i = 0; i < 28; i++)
    {
        scanf("%d", &person);
        for(int i = 0; i < 30; i++)
        {
            if(member[i] == person)
                member[i] = 0;
        }
    }

    for(int i = 0; i < 30; i++){
        if(member[i] > 0)
            printf("%d\n", member[i]);
    }
    
    return 0;
}