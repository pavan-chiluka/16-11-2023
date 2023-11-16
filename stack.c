#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int push(int val)
{
    struct node *newnode=NULL;
    newnode=((struct node*)malloc(sizeof(struct node)));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
int display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int pop()
{
 struct node *temp1=head;
 printf("the pop data %d",head->data);
 head=head->next;
 free(temp1);
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    pop();
    display();
}

