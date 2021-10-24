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

// #include<stdlib.h>
// #define size 50


// void main()
// {
// 	char stk[size],exp[100];
// 	int top,i;
// 	top=-1;
// 	printf("Enter the infix expression:\n");
// 	scanf("%s",exp);
// 	for(i=0;exp[i]!='\0';i++)
// 	{
// 		if(exp[i]=='(' || exp[i]=='[')
// 		{
// 			top++;
// 			stk[top]==exp[i];
// 		}
// 		else if(exp[i]==')')
// 		{
// 			if(stk[top]=='(')
// 			{
// 				top--;
// 			}
// 			else
// 			{
// 				printf("Unbalanced expression!!!!\n");
// 				//exit(0);
// 			}
// 		}
// 	}
// 	if(top==-1)
// 	{
// 		printf("%d\n",top);
// 		printf("Expression is balanced \n");
// 	}
// 	else
// 	{
// 		printf("Expression is Unbalanced\n");
// 	}
// }


//conversion theory 


/*INFIX TO POSTFIX

exponentiation has higher precedence than multiplication and division,
which in turn have higher precedence than addition and multiplication.


1.a+b(infix)
  ab+(postfix)

2.(a+b)*c (infix)
  ab+	->1
  ab+*c
  ab+c*	   (postfix)
  ex:-
  (4+5)*8=72(infix form)
  45+8*=72(postfix form)

3.b*b-4*a*c(infix)			//multiplication and division
  mbb*-4a**c
  bb*-4a*c*
  bb*4a*c*-(postfix)

*/

//implementation of queue usign arrays:-

// #include <stdlib.h>// to use exit
// # define N 2      //queue size

// int queue[N];
// int front=-1;
// int rear=-1;

// //for insertion
// void enqueue(int x)
// {
//   if(rear==N-1)
//   {
//     printf("\n***************Overflow****************\n");
//   }
//   else if(front==-1 && rear==-1)
//   {
//     rear=front=0;
//     queue[rear]=x;
//   }
//   else
//   {
//     rear++;
//     queue[rear]=x;
//   }
// }

// //for deletion
// void dequeue()
// {
//   if(front==-1 && rear==-1)
//   {
//     printf("Underflow queue is empty\n");
//   }
//   else if(front==rear)
//   {
//     front=rear=-1;
//   }
//   else
//   {
//     printf("The Deleted item from the queue is:%d\n",queue[front]);
//     front++;
//   }
// }

// //to display the queue
// void display()
// {
//   if(front==-1 && rear==-1)
//   {
//     printf("The queue is empty\n");
//   }                         
//   else
//   {
//     for(int i=front;i<=rear;i++)
//     {
//       printf("%d\t",queue[i]);
//     }
//   }
// }

// //to check what is the front value without removing it
// void peek()
// {
//   if(front==-1 && rear==-1)
//   {
//     printf("The queue is empty\n");
//   }
//   else
//   {
//     printf("The item at front is:%d\n",queue[front]);
//   }
// }

// void main(){

//  int x, choice;
//  while(1)
//  {
//    printf("\n\n***** MENU *****\n");
//    printf("1.Push \n2.Delete \n3.Display \n4.Peek\n5. Exit");
//    printf("\nEnter your choice: ");
//    scanf("%d",&choice);
//    switch(choice)
//    {
//      case 1:printf("Enter the value to be insert: ");
//             scanf("%d",&x);
//             enqueue(x);
//             break;
//      case 2:dequeue();
//             break;
//      case 3:display();
//             break;
//      case 4:peek();
//             break;
//      case 5:printf("****EXIT****\n");
//             exit(0);
//      default: printf("\nInvalid choice!!! Try again!!!");
//    }
// }
// }

//CIRCULAR QUEUE IMPLEMENTATION USING ARRAYS:-

#include<stdlib.h>
#define N 2

int queue[N];
int front=-1;
int rear=-1;

//to insert
void enqueue(int x)
{
  if(front==-1 && rear==-1)       //1.when queue is empty and we insert 
  {
    front=rear=0;
    queue[rear]=x;
  }
  else if(((rear+1)%N)==front)                       //2.when queue is full here v can't insert
  {       
    printf("queue is full\n");
  }
  else                            //3.when we can insert a item(some position is left) and incrementing rear 
  {
    rear=((rear+1)%N);            //to increment rear
    queue[rear]=x;
  }
}

//for deletion
void dequeue()
{
  if(front==-1 && rear==-1)       //1.when they are full
  {
    printf("Queue is full\n");
  }
  else if(front==rear)            //2.when front and rear are same and v have to delete
  {
    printf("Deleted item  is: %d\n",queue[front]);
    front=rear=-1;
  }
  else                            //3.when they have item at different positions
  {                         
    printf("Deleted item  is: %d\n",queue[front]);
    front=(front+1)%N;
  }
}

//display
void display()
{
  if(front==-1 && rear==-1)
  {
    printf("The queue is empty\n");
  }                         
  else
  {
    int i=front;
    printf("Queue is:-\n");
    while(i!=rear)
    {
      printf("%d\t",queue[i]);
      i=(i+1)%N;                  //to increase the size
    }
    printf("%d\t",queue[rear]);
  }
}

//Peek:-to get the front value

void peek()
{
  if(front==-1 && rear==-1)
  {
    printf("The queue is empty\n");
  }
  else
  {
    printf("%d\n",queue[front]);
  }
}

void main(){

 int x, choice;
 while(1)
 {
   printf("\n\n***** MENU *****\n");
   printf("1.Push \n2.Delete \n3.Display \n4.Peek\n5. Exit");
   printf("\nEnter your choice: ");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:printf("Enter the value to be insert: ");
            scanf("%d",&x);
            enqueue(x);
            break;
     case 2:dequeue();
            break;
     case 3:display();
            break;
     case 4:peek();
            break;
     case 5:printf("****EXIT****\n");
            exit(0);
     default:printf("\nInvalid choice!!! Try again!!!");
   }
}
}