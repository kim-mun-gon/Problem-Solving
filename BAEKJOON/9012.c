#include <stdio.h>
#include <string.h>

#define SIZE 52

typedef struct
{
    char data[SIZE];
    int top;
}StackType;

void init_stack(StackType *s)
{
    s->top = -1;
}

int is_empty(StackType *s)
{
    return (s->top == -1);
}

int is_full(StackType *s)
{
    return (s->top == SIZE-1);
}

void push(StackType *s, char item)
{
    if(is_full(s))
        return;
    
    s->data[++(s->top)] = item;
}

char pop(StackType *s)
{
    if(is_empty(s))
        return '!';
    
    return s->data[(s->top)--];
}

char peek(StackType *s)
{
    if(is_empty(s))
        return -1;
    
    return s->data[s->top];
}

int main(void)
{
    StackType s;
    init_stack(&s);
    int n, result = 1;
    char word[SIZE], w;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", word);
        for(int j = 0; j < strlen(word); j++)
        {
            if(word[j] == '(')
            {
                push(&s, word[j]);
            }
            else if(word[j] == ')')
            {
                w = pop(&s);
                if(w != '(')
                {
                    result = 0;
                    break;
                }
            }
        }
        if(!is_empty(&s))
            result = 0;
        
        if(result == 0)
            printf("NO\n");
        else 
            printf("Yes\n");
        
        result = 1;
        s.top = -1;
    }
    return 0;
}
