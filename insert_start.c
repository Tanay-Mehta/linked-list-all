#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node *link;
}
node;
node *head = NULL;
void insert(int x)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = x;
    temp->link = head;
    head = temp;

}
void print()
{
    node *temp = head;
    printf("your list is: ");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->link;
    } 
    printf("\n");
}
int main(void)
{
    printf("how many numbers\n");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d", &x);
        insert(x);
        print();
    }

    
}


