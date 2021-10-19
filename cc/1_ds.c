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


//1 sep - data structures theory about why do should v even use it


//6 sep 2021

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


//CGPA - Program:-

// void main(){
// 	float cgpa;
// 	printf("Please enter your CGPA:\n");
// 	scanf("%f", &cgpa);

// 	if(cgpa>=9){
// 		printf("Grade is:Outstanding\n");
// 	}
// 	else if(cgpa>7){
// 		printf("Grade is:Excellent\n");
// 	}
// 	else if(cgpa>=5){
// 		printf("Grade is:Good\n");
// 	}
// 	else if(cgpa>=4){
// 		printf("Grade is:Pass\n");
// 	}
// 	else{
// 		printf("Grade is:Fail\n");
// 	}
// }


// 6 sep 2021

//Recursions:-

/*2 types are 
1.direct
2.indirect 
*/

//direct recursion
// int fact(int n);

// void main(){
// 	int n,result;
// 	printf("Enter any number:");
// 	scanf("%d",&n);

// 	result=fact(n);
// 	printf("%d factorial is %d\n",n,result);
// }

// int fact(int n){
// 	if(n==1 || n==0){
// 		return 1;
// 	}
// 	else{
// 		return (n*fact(n-1));
// 	}
// }

//indirect recursion
//the function will call another function    -- have doubt in this

// int n;
// void odd();
// void even();

// void main(){
// 	odd();
// }

// void odd(){
// 	if(n<=10){
// 		printf("%d\n",n+1);
// 		n++;
// 		even();
// 	}
// }
// void even(){
// 	if(n<=10){
// 		printf("%d\n",n-1);
// 		n++;
// 		odd();
// 	}
// }


//Tower of hanoi

// for moving disks from pole a to pole c

// void transfer(int n, char from, char to, char temp){
// 	if(n>0){
// 		{
// 			transfer(n-1,from,temp,to);
// 			printf("move disk %d from %c to %c \n",n,from,to);
// 			transfer(n-1,temp,to,from);
// 		}
// 		return;
// 	}
// }
// void main(){
// 	int n;
// 	printf("How many disks\n");
// 	scanf("%d",&n);
// 	transfer(n,'a','b','c');
// 	return;
// }

//9 sep 2021
//Pointer arthimatic:-

//example-1:-	//THIS pg  cleared my concept regarding * and &

// int *rpointer(int *,int);

// int main(){
// 	int i,*ptr;
// 	int arr[]={11,22,33,44,55};
// 	i=4;
// 	printf("Address of arr=%u\n", arr);
// 	ptr=rpointer(arr,i);// arr=1000, i=4
// 	printf("After incrementing by 4\n");
// 	printf("Address of ptr=%u\n", ptr);
// 	printf("Value at %u is %d \n",ptr,*ptr);
// 	return 0;
// }

// int *rpointer(int *p,int n){
// 	p=p+n;//if p=1000 then n=4 then p=1000+4*4
// 	return p;
// }


//example-2:-

// int *abc();

// int main(){
// 	int *ptr;
// 	ptr=abc();
// 	printf("%d\n",*ptr);
// 	return 0;
// }

// int *abc(){
// 	int x=100,*p;
// 	p=&x;
// 	return p;
// }

//To find the square root

// #include <math.h>

// void fun(int n,int *square,double *sq_root){
// 	*square=n*n;
// 	*sq_root=sqrt(n);
// }

// int main(){
// 	int n=100;
// 	int sq;
// 	double sq_root;
// 	fun(n,&sq,&sq_root);
// 	printf("%d %f\n",sq,sq_root);
// 	return 0;
// }

//WAP to swap two integers using user defined function:

//a=1 //b=2
// int swap(int *a,int *b){
// 	int temp;
// 	temp=*a;//temp=1
// 	*a=*b;//a=2
// 	*b=temp;//b=1
// 	}

// int main(){
// 	int a,b;
// 	printf("Enter the first number\n");
// 	scanf("%d",&a);
// 	printf("Enter the second number\n");
// 	scanf("%d",&b);
// 	swap(&a,&b);
// 	printf("Value of \nfirst number=%d\nsecond number=%d",a,b);
// 	return 0;
// }


//SBI ACCOUNT -- HARI  // I LIKE THIS PROGRAM my favourite

#include <stdlib.h>

void deposit(int *account,int amount);
void withdraw(int *account,int amount);
void display(int *account);

void main(){
	int choice, amount, local_account=0;

	for(;;)		//infinte loop      	//menu driven code -- to repeat it 
	{
		printf("Enter you choice:\n1.deposit\n2.credit\n3.check balance\n4.exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: printf("Enter the amount to deposit:");
					scanf("%d",&amount);
					deposit(&local_account,amount);
					break;
			case 2: printf("Enter the amount to withdraw:");
					scanf("%d",&amount);
					withdraw(&local_account,amount);
					break;
			case 3: display(&local_account);
					break;
			case 4: exit(0);
					break;
			default:printf("please enter vaid input from the above options\n");
		}
	}
}

void deposit(int *account, int amount){
	*account=*account + amount;
}

void withdraw(int *account, int amount){
	*account=*account - amount;
}

void display(int *account){
	printf("The balance in the account is %d\n",*account);
}


//STRUCTURES:-

// //pg-1
// struct student{				//Declared structure 
// 	char name[20];
// 	char id[16];
// 	int m1,m2,m3;
// };

// struct student st1;			//Declared variables of the structure globally

// void main(){
// 	printf("Enter the name:");
// 	scanf("%s",st1.name);

// 	printf("Enter the id:");
// 	scanf("%s",&st1.id);

// 	printf("Enter the marks:\n");
// 	scanf("%d%d%d",&st1.m1,&st1.m2,&st1.m3);

// 	printf("The detials of the student\n");
// 	printf("Name:%s\nID:%s\nMarks:%d\t%d\t%d\t",st1.name,st1.id,st1.m1,st1.m2,st1.m3);
// }

//2.Wap to compare the info of two students;

// #include <string.h> 	// to use strcmp function vhave to use include this

// struct student{
// 	char name[20];
// 	int roll;
// };

// void main(){
// 	struct student st1={"naresh",4},st2; //Declared variables of the structure locally
// 	st2=st1;
// 	if( strcmp(st1.name,st2.name)==0 && (st1.roll==st2.roll)){ 
// 		printf("Student 1 and student 2 are same\n");
// 	}
// 	else{
// 		printf("student 1 and student 2 are not same\n");
// 	}
// }

// //3.wap to help mr.arjun(nutroinst) take info like age,height,weight & displaythatinfo

// struct cinfo
// {
// 	int age;
// 	float height;
// 	float weight;
// };
// void main(){
// 	struct cinfo c1,c2,c3,p4;
// 	printf("Enter the age,height and weight for client 1:");
// 	scanf("%d%f%f",&c1.age,&c1.height,&c1.weight);

// 	printf("Enter the age,height and weight for client 2:");
// 	scanf("%d%f%f",&c2.age,&c2.height,&c2.weight);

// 	printf("Enter the age,height and weight for client 3:");
// 	scanf("%d%f%f",&c3.age,&c3.height,&c3.weight);
	
// 	//comparing age
// 	if(c1.age==c2.age && c2.age==c3.age && c1.age==c3.age){
// 		printf("age of all the client's is same\n");
// 	}
// 	else if(c1.age==c2.age){
// 		printf("client 1 and client 2 age is same\n");
// 	}
// 	else if(c2.age==c3.age){
// 		printf("client 2 and client 3 age is same\n");
// 	}
// 	else if(c1.age==c3.age){
// 		printf("client 1 and client 3 age is same\n");
// 	}
// 	else{
// 		printf("all have different age\n");
// 	}

// 	//average
// 	p4.age=c1.age+c2.age+c3.age;
// 	p4.height=c1.height+c2.height+c3.height;
// 	p4.weight=c1.weight+c2.weight+c3.weight;
// 	printf("Average age of all 3 client's is=%d\n",p4.age/3);
// 	printf("Average height of all 3 client's is=%f\n",p4.height/3);
// 	printf("Average weight of all 3 client's is=%f\n",p4.weight/3);
// }


//PARTIAL INITIALIZATION:-

// struct student
// {
// 	char name[20];
// 	int roll;
// 	char remarks;
// 	float marks;
// };
// void main(){
// 	struct student s1={"Anishaa",45};
// 	printf("Name=%s\n",s1.name);
// 	printf("Roll=%d\n",s1.roll);
// 	printf("Remarks=%c\n",s1.remarks);
// 	printf("Marks=%f\n",s1.marks);
// }


//1.wap to display the details of 'n' students such as name,id,marks using structure

// struct student
// {
// 	char name[20];	//20 bytes
// 	char id[20];	//20 bytes
// 	float m1;		//8  bytes
// };
// struct student st[70];	//70*48 bytes of memory will be allocated

// void main(){
// 	int n;
// 	printf("Enter the total students:\n");
// 	scanf("%d",&n);
// 	printf("Enter the details of the students\n");

// 	for(int i=1;i<=n;i++)
// 	{
// 		printf("Enter the name of student %d\n",i);
// 		scanf("%s",st[i].name);
// 		printf("Enter the id of student %d\n",i);
// 		scanf("%s",st[i].id);
// 		printf("Enter the marks of student %d\n",i);
// 		scanf("%f",&st[i].m1);
// 	}
// 	printf("\nDisplay the details of n students\n");
// 	for(int i=1;i<=n;i++)
// 	{
// 		printf("the name of student %d is %s\n",i,st[i].name);
// 		printf("the id of student %d is %s\n",i,st[i].id);
// 		printf("the marks of student %d is %f\n",i,st[i].m1);
// 	}
// }

// // 2.define a structure of employe dta members name,address,age and salary and find avgof salary

// struct  employee
// {
// 	char name[20];		//20 bytes		
// 	char address[20];	//20 bytes
// 	int age;			//2 bytes
// 	float salary;		// 8 bytes
// };

// struct employee e[10],e1;	//30*10 bytes

// void main()
// {
// 	int n,i=1,t=0; // total salary
// 	printf("Enter the no. of employees:\n");
// 	scanf("%d",&n);

// 	for(i=1;i<=n;i++){
// 		printf("Enter the name, address , age and salary for employee %d\n",i);
// 		scanf("%s%s%d%f",e[i].name,e[i].address,&e[i].age,&e[i].salary);
// 	}

// 	for(i=1;i<=n;i++){
// 		t=t+e[i].salary;// total salary
// 	}
// 	printf("Average salary of employees is %f\n",(float)t/n);
// }


// //NOW ABSTRACT DATA TYPE :- should refer this concept in that labsheet 

// typedef int age;
// typedef float height;
// typedef char name[50];

// void main(){
// 	age my_age;			//declaration of age,height and name
// 	height my_height;
// 	name my_name;

// 	printf("Enter the age:\n");
// 	scanf("%d",&my_age);
// 	printf("Enter the height:\n");
// 	scanf("%f",&my_height);
// 	printf("Enter the name\n");
// 	scanf("%s",my_name);

// 	printf("The age of %s is %d and height is %.2f \n",my_name,my_age,my_height);
// }


// //Nested Structure A structure inside another structure we term as nested structure.

// #include <string.h>

// typedef char name[40];
// typedef int id;

// struct employee
// {
// 	name e_name;
// 	id e_id;
// 	struct date
// 	{
// 		int dd;
// 		int mm;
// 		int yyyy;
// 	}doj;			//doj - is date of joining 
// };

// typedef struct employee Employee;

// void main()
// {
// 	Employee e;
// 	e.e_id=122;
// 	strcpy(e.e_name,"Naresh");
// 	e.doj.dd=12;
// 	e.doj.mm=8;
// 	e.doj.yyyy=2020;
// 	printf("employee id: %d\n",e.e_id);
// 	printf("employee name: %s\n",e.e_name);
// 	printf("employee date of joining: %d/%d/%d \n",e.doj.dd,e.doj.mm,e.doj.yyyy);

// }

// UNIONS

/*facts
1.union is user defined data type but unlike structures, union members share same memory location.
2.size of union is taken according to the size of the largest member of the union.
3.They share same memory location,if v make changes in one member then it will be reflected to other
  member as well.
*/

//fact3
// union abc
// {
// 	int a;
// 	char b;
// }var;

// int main(){
// 	var.a=70;
// 	printf("a=%d\n",var.a);//output a=70
// 	printf("b=%c\n",var.b);//output b=F ascii of 70 samememo location output so b=a a is 70
// 	return 0;
// }

//accessing members using pointers  (using arrow ->) and also know the sizeof union 

// union abc
// {
// 	int a;
// 	char b;
// };
// int main()
// {
// 	union abc var;
// 	var.a=80;
// 	union abc *p=&var;
// 	printf("%d %c\n",p->a,p->b);
// 	printf("%ld \n",sizeof(union abc)); // sizeof the union  
// 	return 0;
// }


/*Enumeration-
an enumerated type is a user defined type which is used to assign names to integral constants
bcz names are easier to handle in program
Facts:-
1.Two or more names can have same value.
2.v can assign values in any order.all unassigned names will get values of previous name+1.
3.only integral values are allowed.
	will through an error if i give float values
	(error: enumerator value for ‘y’ is not an integer constant)
4.all enum constant must be unique in their scope.
	(error: redeclaration of enumerator ‘x’)
*/

//fact1 and fact2

// int main(){
// 	enum point1 {x=0,y=0,z=0,t};
// 	enum point2 {x=0,y=0,z=0,t};//not allowed v are redeclaring the values x,y,z(uncommentto run)
// 	printf("%d %d %d %d \n",x,y,z,t);
// 	return 0;
// }










