#include <stdio.h>
#define max 10
int front = -1, rear = -1;
int a[max];
void enqueue();
void dequeue();
void display();
void main()
{
    int choice;
    do
    {
        printf("1. Enqueue 2. Dequeue 3. Display 4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;
        }
    } while (choice != 4);
}

void enqueue()
{
    int value;
    printf("Enter the value:\n");
    scanf("%d", &value);
    if (rear == max - 1)
    {
        printf("Queue Overflow\n");
    }
    else if (front == -1)
    {
        front++;
        rear++;
        a[rear] = value;
    }
    else
    {
        rear++;
        a[rear] = value;
    }
}

void dequeue()
{
    if (front == -1 || rear < front)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d is deleted\n", a[front]);
        front ++;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        if (front == -1 || rear < front)
        {
            printf("Queue Underflow\n");
        }
        else
        {
            printf("%d\n", a[i]);
        }
    }
}