#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
int length=0;
//void p;

int main()
{
    int choice=1;
    printf("Choose the operation you want to perform on the list: ");
    while(choice)
    {
        printf("\n1. Push.\n2. Pop.\n3. Enqueue.\n4. Dequeue.\n5. Display.\n6. Exit.\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                int data;
                printf("Enter the data to push in the list: ");
                scanf("%d", &data);
                push(data);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                int data;
                printf("Enter the data to enqueue in the list: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            }
            case 4:
            {
                dequeue();
                break;
            }
            case 5:
            {
                printf("The list is: [");
                display();
                printf("]");
                break;
            }
            case 6:
            {
                printf("Exiting...");
                choice = 0;
                break;
            }
            default:
            {
                printf("Please enter a valid choice.");
            }
        }
    }
}
void push(int data)
{
    if(head==NULL)
    {
        struct Node *ptr;
        ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = NULL;
        head = ptr;
        length++;
    }
    else
    {
        struct Node *ptr, *p;
        ptr = (struct Node *)malloc(sizeof(struct Node));
        p = head;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        ptr->data = data;
        p->next = ptr;
        ptr->next = NULL;
        length++;
    }
}
void enqueue(int data)
{
    push(data);
}
void dequeue()
{
    if(head==NULL)
    {
        printf("The list is empty.");
    }
    else if(head->next==NULL)
    {
        head = NULL;
    }
    else
    {
        head = head->next;
        length--;
    }
}
void pop()
{
    struct Node *p;
    p = head;
    for(int i=1;i<length-1;i++)
    {
        p = p->next;
    }
    p->next = NULL;
}
void display()
{
    if(head==NULL)
    {
        printf("The list is empty.");
    }
    else
    {
        struct Node *p;
        p = head;
        for(int i=0;i<length-1;i++)
        {
            printf("%d, ", p->data);
            p = p->next;
        }
        printf("%d", p->data);
    }
}
