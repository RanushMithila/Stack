#include <stdio.h>

int top = -1;
int stack[10];
void push(int data)
{
    if (top != 9)
    {
        stack[++top] = data;
        printf("Add %d successfully\n", data);
    }
    else
    {
        printf("You can't enter more values.\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("You can't remove values. Stack already empty\n");
    }
    else
    {
        printf("%d Removed succesfully.\n", stack[top--]);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Opps! Sorry stack is empty you can't read values.\n");
    }
    else
    {
        printf("Top value is %d\n", stack[top]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    push(20);
    pop();
    peek();
    push(30);
    peek();
    return 0;
}