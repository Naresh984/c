#include <stdio.h>

/*Stack is a linear data structure in which insertions and deletions are performed using one end called top end. 
Stack follows LIFO (Last In First Out)*/

//1. c program to implement the stack

// #include <stdlib.h>
// #define SIZE 5 // defining stack size
// int arr[SIZE];
// int top=-1;


// void push(int ele);
// void pop();
// void display();

// void main(){

// 	int ele, choice;
// 	while(1)
// 	{
// 		printf("\n\n***** MENU *****\n");
// 		printf("1. Push\n2. Pop\n3. Display\n4. Exit");
// 		printf("\nEnter your choice: ");
// 		scanf("%d",&choice);
// 		switch(choice)
// 		{
// 			case 1: printf("Enter the value to be insert: ");
// 					scanf("%d",&ele);
// 					push(ele);
// 					break;
// 			case 2:	pop();
// 					break;
// 			case 3: display();
// 					break;
// 			case 4: printf("****EXIT****\n");
// 					exit(0);
// 			default: printf("\nInvalid choice!!! Try again!!!");
// 		}
// }
// }

// void push(int ele)
// {
// 	if(top==SIZE-1)
// 	{
// 		printf("stack overflow\n");
// 	}
// 	else
// 	{
// 		top++;
// 		arr[top]=ele;
// 	}
// }

// void pop()
// {
// 	int del;
// 	if(top==-1)
// 	{
// 		printf("Stack underflow\n");
// 	}
// 	else
// 	{
// 		del=arr[top];
// 		printf("the element popped is %d\n",del);
// 		--top;
// 	}
// }

// void display()
// {
// 	if(top==-1)
// 	{
// 		printf("the stack is empty\n");
// 	}	
// 	else
// 	{
// 		printf("the elements of the stack are:\n");
// 		for(int i=0;i<=top;i++)
// 		{
// 			printf("%d\n",arr[i]);
// 		}
// 	}
// }		


//2.Check for balanced parentheses in an expression using Stack:

// ONE STACK TO STORE and one array to take input of the expression

#include<stdlib.h>
#define size 50


void main()
{
	char stk[size],exp[100];
	int top,i;
	top=-1;
	printf("Enter the infix expression:\n");
	scanf("%s",exp);
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(' || exp[i]=='[')
		{
			top++;
			stk[top]==exp[i];
		}
		else if(exp[i]==')')
		{
			if(stk[top]=='(')
			{
				top--;
			}
			else
			{
				printf("Unbalanced expression!!!!\n");
				//exit(0);
			}
		}
	}
	if(top==-1)
	{
		printf("%d\n",top);
		printf("Expression is balanced \n");
	}
	else
	{
		printf("Expression is Unbalanced\n");
	}
}



