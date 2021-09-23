#include <stdio.h>

//24 august 2021
/*sample function*/

// void add(int a,int b); 	//either it should be variable with datatype or just datatypee
						
// int sum; 				//Global declaration
// void main(){
// 	int a,b;			//local delclaration
// 	printf("enter the 2 numbers:\n");
// 	scanf("%d%d",&a,&b);
// 	add(2,3);			//function call 
// }

// void add(int a,int b){	//fucntion defintion,here instead of a&b i can also give x&y anything			
// 	int sum = a+b;
// 	printf("sum=%d\n",sum);
// }


//25 august 2021

//Function before main method

// int sum;
// int add(int a, int b)	//function defintion formal parmateres
// {
// 	sum=a+b;
// 	return sum;
// }
// void main(){
// 	int x,y;
// 	printf("Enter two integers:\n");
// 	scanf("%d %d", &x, &y);
// 	sum=add(x,y);		//funciton call actual paramteres
// 	printf("the sum is=%d",sum);
// }

//26 august 2021

//illustrate both increment and decrement operator

// void main()
// {
// 	int a,b,r1,r2;
// 	printf("Enter the values of a and b \n");
// 	scanf("%d%d", &a,&b);

// 	printf("Original value of a=%d and b=%d\n",a,b);

// 	r1=++a + --b;
// 	printf("After preincrement of a=%d and predecrement of b=%d is =%d\n",a,b,r1);

// 	r2=a++ + b--;
// 	printf("After postincrement of a=%d and postdecrement of b=%d is =%d\n",a,b,r2);
// }


// int main(){
// 	int i=5;
// 	printf("the value of i++ is %d\n", i++);
// 	printf("the value of i is %d\n", i);
// }


//arithmatic operations program:-  USING USER DEFINED FUNCTION

// void arithmatic_op(int a,int b);

// int main(){
// 	int a,b;
// 	printf("Enter the values of a and b\n");
// 	scanf("%d%d",&a,&b);
// 	arithmatic_op(a,b);
// 	return 0;
// }

// void arithmatic_op(int a,int b){
// 	printf("Result of addition operation of a=%d and b=%d is %d\n",a,b,a+b);
// 	printf("Result of subtration operation of a=%d and b=%d is %d\n",a,b,a-b);
// 	printf("Result of mulptiplication operation of a=%d and b=%d is %d\n",a,b,a*b);
// 	printf("Result of division operation of a=%d and b=%d is %d\n",a,b,a/b);
// 	printf("Result of modulus operation of a=%d and b=%d is %d\n",a,b,a%b);
// }


//30 august 2021
//factorial problem:- pg to find the factorial of a given number

// int number;

// int read(){
// 	int num;
// 	scanf("%d",&num);
// 	return num;
// }

// void display(int number){
// 	printf("The number entered is %d\n",number);
// }

// void displayf(int factorial){
// 	printf("The factorial is %d",factorial);
// }

// int fact(int number){
// 	int res=1;
// 		for(int i=1;i<=number;i++){
// 			res=res*i;
// 			return res;
// 		}
// }

// int main(){
// 	int number,factorial;
// 	printf("Enter the nubmer to compute the factorial:");
// 	number=read();
// 	display(number);
// 	factorial=fact(number);
// 	displayf(factorial);
// 	return 0;
// }

//31 august 2021

//ARRAYS
/*program to read and display the elements of type int using arrays using looping 
statment(more efficent) and user defined functions*/

// void read(int [],int size);
// void display(int [],int size);

// int main(){
// 	int a[20],size;
// 		printf("Enter the size of an array\n");
// 		scanf("%d",&size);
// 		read(a,size);
// 		display(a,size);
// 		return 0;
// }

// void read(int a[],int size){
// 		printf("Enter the elements of array\n");
// 		for(int i=0;i<size;i++){
// 			scanf("%d",&a[i]);
// 		}
// }

// void display(int a[],int size){
// 		printf("The values of an array are:\n");
// 		for(int i=0;i<size;i++){
// 			printf("%d\t",a[i]);
// 		}	
// }


/* harri wants to buy 10 items.he want to store the price of all items. 
Using-(user defined function) to read() and display() */

// void read(int plhari[],int size);
// void display(int [],int size);

// int size = 10;
// int main(){
// 	int plhari[10];
// 		read(plhari,size);
// 		display(plhari,size);
// 		return 0;
// }

// void read(int plhari[],int size){
// 		printf("Enter the price of all items:\n");
// 		for(int i=0;i<size;i++){
// 			scanf("%d",&plhari[i]);
// 		}
// }

// void display(int plhari[],int size){
// 		printf("Price of all the items are:\n");
// 		for(int i=0;i<size;i++){
// 			printf("%d\t",plhari[i]);
// 			//if hari understand the cost is doubled x2
// 			//printf("%d\t",plhari[i]*2);    to double it's price multiply by 2
// 		}	
// }

//1 august - data structures theory about why do should v even use it


//6 august 2021

//1.age calculater - to check whehter kishan(young person) is eligible to vote or not  USING USER DEFINED 

// void vote(int, int , int);

// void main(){
// 	int age,yob,cy;

// 	printf("Enter your date of birth:");
// 	scanf("%d",&yob);

// 	printf("Enter the current year:");
// 	scanf("%d",&cy);

// 	vote(age,cy,yob);
// }

// void vote(int age,int cy,int yob){
// 	age=cy-yob;

// 	if(age>=18){
// 		printf("You are eligible to vote");
// 	}
// 	else{
// 		printf("You are not eligible to vote for the elections\n");
// 	}
// }


//2.physics cycle or chemistry cycle : CHARACTER  -- 	USING USER DEFINED 

// void choice(char);

// void main(){
// 	char ch;

// 	printf("Enter your choice:\n p for physics cycle\n Any other letter for chemistry cycle\n");
// 	scanf("%c",&ch);
// 	choice(ch);
// }

// void choice(char ch){
// 	if(ch=='p'){
// 		printf("PHYSICS CYCLE\n");
// 	}
// 	else{
// 		printf("chemistry cycle\n");
// 	}
// }