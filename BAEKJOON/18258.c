#include <stdio.h>
#include <string.h>

#define SIZE  2000000

typedef int element;

typedef struct
{
    element data[SIZE];
    int front, rear;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = 0;
}

int is_empty(Queue *q)
{
    return (q->front == q->rear);
}

int is_full(Queue *q)
{
    return ((q->rear+1) % SIZE == q->front);
}

void queue_print(Queue *q)
{
    if(!is_empty(q))
    {
        int i = q->front;
        do{
            i = (i+1) % (SIZE);
            printf("%d ", q->data[i]);
            if(i == q->rear)
                break;
        }while(i != q->front);
    }
    printf("\n");
}

void enqueue(Queue *q, element item)
{
    if(is_full(q))
        return;
    q->rear = (q->rear+1) % SIZE;
    q->data[q->rear] = item;
}

element dequeue(Queue *q)
{
    if(is_empty(q))
        return -1;
    q->front = (q->front+1) % SIZE;
    return q->data[q->front];
}

int size(Queue *q)
{
    return ((q->rear)-(q->front));
}

int front(Queue *q)
{
    if(is_empty(q))
        return -1;
    return q->data[q->front+1];
}

int back(Queue *q)
{
    if(is_empty(q))
        return -1;
    return q->data[q->rear];
}

int main(void)
{
    Queue q;
    init(&q);
    int n;

    scanf("%d", &n);
    while(n--)
    {
        char str[10];
        scanf("%s", str);

        if(!strcmp(str, "push"))
        {
            int item = 0;
            scanf("%d", &item);
            enqueue(&q, item);
        }
        else if(!strcmp(str, "pop"))
            printf("%d\n", dequeue(&q));
        else if(!strcmp(str, "size"))
            printf("%d\n", size(&q));
        else if(!strcmp(str, "empty"))
            printf("%d\n", is_empty(&q));
        else if(!strcmp(str, "front"))
            printf("%d\n", front(&q));
        else if(!strcmp(str, "back"))
            printf("%d\n", back(&q));
    }
    return 0;
}