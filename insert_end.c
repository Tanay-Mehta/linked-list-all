#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void addLast(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if(*head == NULL)
         *head = newNode;
    else
    {
        struct node *lastNode = *head;
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }

}

void printList(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main()
{
     struct node *head = NULL;

     addLast(&head,2);
     addLast(&head,5);
     addLast(&head,1);

     printList(head);

     return 0;
}