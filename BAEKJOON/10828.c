#include <stdio.h>
#include <string.h>

#define SIZE 10001

typedef int element;
typedef struct
{
    element data[SIZE];
    int top;
}StackType;

void init_stack(StackType *s)
{
    s->top = -1;
}
// empty : return 1 
// !empty : return 0
int is_empty(StackType *s)
{
    return (s->top == -1);
}
// full : return 1
// !full : return 0
int is_full(StackType *s)
{
    return (s->top == SIZE-1);
}

void push(StackType *s, element item)
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

element size(StackType *s)
{
    return s->top + 1;
}

int main(void)
{
    StackType s;
    init_stack(&s);

    char word[6];
    int item = 0, n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", word);

        if(strcmp(word, "push") == 0)
        {
            scanf("%d", &item);
            push(&s, item);
        }
        else if(strcmp(word, "pop") == 0)
        {
            item = pop(&s);
            printf("%d\n", item);
        }
        else if (strcmp(word, "top") == 0)
		{
			item = peek(&s);
			printf("%d\n", item);
		}
		else if (strcmp(word, "empty") == 0)
		{
			item = is_empty(&s);
			printf("%d\n", item);
		}
		else if (strcmp(word, "size") == 0)
		{
			item = size(&s);
			printf("%d\n", item);
		}
    }
    return 0;
}


