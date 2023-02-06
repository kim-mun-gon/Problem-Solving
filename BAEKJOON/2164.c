#include <stdio.h>

#define SIZE 500001

typedef int element;
typedef struct{
    element data[SIZE];
    int rear, front;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = 0;
}

int is_empty(Queue *q)
{
    return (q->rear == q->front);
}

int is_full(Queue *q)
{
    return ((q->rear+1) % SIZE == q->front);
}

void que_print(Queue *q)
{
    if(!is_empty(q))
    {
        int i = q->front;
        do
        {
            i = (i+1) % SIZE;
            printf("%d ", q->data[i]);
            if(i == q->rear)
                break;
        } while (i != q->front);
    }
    printf("\n");
}

void enqueue(Queue *q, int item)
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

int main(void)
{
    Queue q;
    init(&q);
    
    int n; 
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        enqueue(&q, i);
    
    int qu_size = size(&q);
    
    while(qu_size != 1)
    {
        int cnt1 = dequeue(&q);
        int cnt2 = dequeue(&q);
        enqueue(&q, cnt2);
        qu_size = size(&q);
    }

    que_print(&q);
    return 0;
}

