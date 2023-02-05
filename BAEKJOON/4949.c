#include <stdio.h>
#include <string.h>

#define SIZE 102

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
    char word[SIZE], w;
    int result = 1;

    while(1)
    {
        fgets(word, SIZE, stdin);

        if(strcmp(word, ".\n") == 0)
            break;
        
        for(int i = 0; i < strlen(word); i++)
        {
            if(word[i] == '(' || word[i] == '[')
                push(&s, word[i]);
            else if(word[i] == ')')
            {
                w = pop(&s);
                if(w != '(')
                {
                    result = 0;
                    break;
                }
            }
            else if(word[i] == ']')
            {
                w = pop(&s);
                if(w != '[')
                {
                    result = 0;
                    break;
                }
            }
        }
        if(!is_empty(&s))
            result = 0;
        
        if(result == 0)
            printf("no\n");
        else 
            printf("yes\n");
        
        s.top = -1;
        result = 1;
    }
    return 0;
}
