#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

typedef int element;
typedef struct
{
    element data[SIZE];
    int top;
} StackType;

void init_stack(StackType *s)
{
    s->top = -1;
}

int is_full(StackType *s)
{
    return (s->top == SIZE-1);
}

int is_empty(StackType *s)
{
    return (s->top == -1);
}

void push(StackType *s, int item)
{
    if(is_full(s))
        return;
    s->data[++(s->top)] = item;
}

element pop(StackType *s)
{
    if(is_empty(s))
        return -1;
    return s->data[(s->top)--];
}

element peek(StackType *s)
{
    if(is_empty(s))
        return -1;
    return s->data[s->top];
}

int main(void)
{
    StackType s;
    init_stack(&s);

    int n, target, count = 1, order = 0, rest;
    char* result;
    scanf("%d", &n);
    result = (char*)malloc(sizeof(char) * (2*n + 1));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &target);
        while(count <= target)
        {
            push(&s, count);
            result[order++] = '+';
            count++;
        }
        rest  = pop(&s);
        if(rest == target)
        {
            result[order++] = '-';
        }
        else
        {
            printf("NO\n");
            free(result);
            return 0;
        }
    }
    for(int i = 0; i < n*2; i++)
        printf("%c\n", result[i]);
    
    return 0;
}