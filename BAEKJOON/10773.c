#include <stdio.h>

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
    return (s->top == SIZE - 1);
}

int is_empty(StackType *s)
{
    return (s->top == -1);
}

void push(StackType *s, int item)
{
    if (is_full(s))
        return;
    s->data[++(s->top)] = item;
}

element pop(StackType *s)
{
    if (is_empty(s))
        return -1;
    return s->data[(s->top)--];
}

element peek(StackType *s)
{
    if (is_empty(s))
        return -1;
    return s->data[s->top];
}

int main(void)
{
    StackType s;
    init_stack(&s);

    int t, n, sum = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            pop(&s);
        }
        else
        {
            push(&s, n);
        }
    }

    for (int i = 0; i <= s.top; i++)
    {
        sum += s.data[i];
    }

    printf("%d", sum);
    return 0;
}