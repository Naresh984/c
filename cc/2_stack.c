#include <stdio.h>

/*Stack is a linear data structure in which insertions and deletions are performed using one end called top end. 
Stack follows LIFO (Last In First Out)*/

// c program to implement the stack

#define SIZE 5 // defining stack size
int arr[SIZE];
int top=-1;

void main(){
	void push()
	{
		int ele;
		if(top==SIZE-1)
		{
			printf("stack overflow\n");
		}
		else
		{
			printf("Enter the element which has to be pushed to the stack:");
			scanf("%d",&ele);
			top++;
			arr[SIZE]=ele;
		}
	}

	void pop()
	{
		int del;
		if(top==-1)
		{
			printf("Stack underflow\n");
		}
		else
		{
			del=arr[top];
			printf("the element popped is %d\n",del);
			--top;
		}
	}

	void display()
	{
		if(top==-1)
		{
			printf("the stack is empty\n");
		}	
		else
		{
			printf("the elements of the stack are:\n");
			for(int i=0;i<=top;i++)
			{
				printf("%d\n",arr[i]);
			}
		}
	}		
}



