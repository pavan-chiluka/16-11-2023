#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void eneq(int val)
{
struct node *newnode=NULL;
newnode=((struct node*)malloc(sizeof(struct node)));
newnode->data=val;
newnode->next=NULL;
        if(front==NULL)
	{
		front=rear=newnode;
	}
        else
	{
        rear->next=newnode;
	rear=newnode;
	}
}
void display()
{
	struct node *temp=front;
	while(temp!=NULL)
	{
        printf("%d",temp->data);
	temp=temp->next;
	}
}
void deq()
{
struct node *temp2=front;
printf("the eneq data %d",front->data);
front=front->next;
free(temp2);
}
int main()
{
eneq(1);
eneq(2);
eneq(3);
eneq(4);
eneq(5);
display();
printf("\n");
deq();
printf("\n");
display();
}
