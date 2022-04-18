void insert()
{
    if(rear == max - 1)
    {
        printf("Queue Overflow");
    }
    else if(front == -1)
    {
        front ++;
        rear ++;
        a[rear] = value;
    }
    else
    {
        rear ++;
        a[rear] = value;
    }
}

void delete()
{
    if(front == -1 || rear < front)
    {
        printf("Queue Underflow");
    }
    else
    {
        printf("%d is deleted", a[front]);
        front ++;
    }
}

void display()
{
    for(int i = front; i <= rear; i++)
    {
        if(front == -1 || rear < front)
        {
            printf("Queue Underflow");
        }
        else
        {
            printf("%d", a[i]);
        }
    }
}
