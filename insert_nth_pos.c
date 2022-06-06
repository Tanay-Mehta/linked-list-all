#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}
node;
node *head;
int insert(int data, int n)
{
    node* temp1 = malloc(sizeof(node));
    temp1->data = data;
    temp1->next = NULL;
    if (n==1){
        temp1->next = head;
        head = temp1;
        return 0;
    }
    node *temp2 = head;
    for(int i=0;i<n-2;i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
int print(){
    node *temp = head;
    printf("your list is: ");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    } 
    printf("\n");

}
int main(void)
{
    head = NULL;
    insert(2, 1); //2
    insert(4, 2); //24
    insert(9, 2); //294
    insert(8, 1);//8294
    insert(7, 5);//82947
    print();

}