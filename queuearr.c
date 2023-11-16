#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
void eneq(int data);
int deq();
int display();
int main()
{
        int choice,data;
        while(1)
        {
        printf("1:push,2:pop,3:display,4:exit");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:printf("enter data");
                       scanf("%d",&data);
                       eneq(data);
                       break;

                case 2:if(front==-1)
                       {
                       printf("stack is not created");
                       }
                       else
                       {
                       printf("pop data%d",deq());
                       }
                       break;
                case 3:display();
                       break;
                case 4:exit(0);
        }
        }
}
void eneq(int data)
{
if(rear==MAX-1)
{
printf("stack is full");
}
else
{
	if(front==-1)
	{
		++front;
	}
        queue[++rear]=data;
}
}
int deq()
{
     int temp=queue[front];
     if(front==rear-1)
       {
       front=rear=-1;
       }
     front++;
     return temp;
}
int display()
{
        int i;
        for(i=front;i<=rear;i++)
        {
                printf("%d",queue[i]);
        }
}




