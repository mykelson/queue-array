#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>


#define CAPACITY 10

typedef struct _queue
{
    int array[CAPACITY];
    int front;
    int size;
}
queue;

void enqueue(queue* q, int a);
int dequeue(queue* que);


int main(void)
{
    
    queue names;
    names.front = 0;
    names.size = 0;

    enqueue(&names, 3);
    enqueue(&names, 2);
    enqueue(&names, 7);

    int x = dequeue(&names);

    printf("\n %i got dequeued\n", x);
    printf("\n %i got dequeued\n", x);
    printf("\n %i got dequeued\n", x);
    printf("\n %i got dequeued\n", x);

}

void enqueue(queue* q, int word)
{
    if (q->size == CAPACITY)
    {
        printf("\n Queue OverFlow\n");
    }
    else
    {
        q->array[++q->size] = word;
    }
}

int dequeue(queue* que)
{
    if (que->front == -1 || que->size <= 0)
    {
        printf("queue UnderFlow\n");
    }
    else
    {
        que->size--;
       return que->array[++que->front];
    }
}