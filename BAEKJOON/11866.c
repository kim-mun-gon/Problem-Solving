#include <stdio.h>
#define SIZE 1001

typedef int element;
typedef struct
{
    element data[SIZE];
    int front, rear;
}Queue;

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

void print_que(Queue *q)
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
element size(Queue *q)
{
    return (q->rear - q->front);
}

int main(void)
{
    Queue q;
    init(&q);
    int N, K;

    scanf("%d %d", &N, &K);

    for(int i = 1; i <= N; i++)
        enqueue(&q, i);
    
    printf("<");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < K-1; j++)
        {
            int p = dequeue(&q);
            enqueue(&q, p);
        }
        if(size(&q) == 1)
            break;
        printf("%d, ", dequeue(&q));
    }
    printf("%d>", dequeue(&q));
    return 0;
}