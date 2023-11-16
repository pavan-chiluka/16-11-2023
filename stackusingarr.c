#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int data);
int pop();
int peek();
int display();
int main()
{
	int choice,data;
	while(1)
	{
	printf("1:push,2:pop,3:peek,4:display,5:exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter data");
		       scanf("%d",&data);
		       push(data);
		       break;

	        case 2:if(top==-1)
		       {
		       printf("stack is not created");
	               }
		       else
		       {
                       printf("pop data%d",pop());
		       }  
		       break;

		case 3:if(top==-1)
                       {
                       printf("stack is not created");
                       }
		       else
                       {
                       printf("pop data%d",peek());
                       }  
                       break;
		case 4:display();
		       break;
		case 5:exit(0);
        }
	}
}
void push(int data)
{
if(top==MAX-1)
{
printf("stack is full");
}
else
{
 stack[++top]=data;
}
}
int pop()
{
	return stack[top--];
}
int peek()
{
	return stack[top];
}
int display()
{
	int i;
	for(i=0;i<top;i++)
	{
		printf("%d",stack[i]);
	}
}



	 

