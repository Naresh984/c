#include<stdio.h>
#include<string.h>

//Structures -- used to store dissimilar data.

// struct employee{
// 	int code;
// 	float salary;
// 	char name[40];
// };  //semicolon is important 

// int main(){
// 	int a=34;
// 	float b=34.34;

// 	// employee e1;
// 	// e1.code=100; 		///this won't work without employee structure

// 	struct employee e1;
// 	e1.code=24;
// 	e1.salary=5500.56;
// 	// e1.name="sintel"; 			//this won't work
// 	// fgets(e1.name,40,stdin); 		//my way
// 	strcpy(e1.name,"sintel");	//harry way
// 	printf("Name is:%s\n",e1.name);
// 	printf("salary is:%f\n",e1.salary);
// 	printf("code is:%d\n",e1.code);

// 	return 0;
// }


//1.write a pg to store details of 2 employees from user defined data

// struct employee{						//structure name- employee	
// 	char name[10]; 						//members of the structure 
// 	float salary;
// };

// int main(){
// 	struct employee e1,e2;				//variables of the structure are e1,2
// 	printf("Enter the name of e1:");
// 	scanf("%s", e1.name);
// 	printf("Enter the salary of e1:");
// 	scanf("%f", &e1.salary);
// 	printf("Enter the name of e2:");
// 	scanf("%s", e2.name);
// 	printf("Enter the salary of e2:");
// 	scanf("%f", &e2.salary);
// 	printf("Name of e1:%s\n",e1.name);
// 	printf("salary of e1:%f\n",e1.salary);
// 	printf("Name of e2:%s\n",e2.name);
// 	printf("salary of e3:%f\n",e2.salary);
// 	return 0;
// }

//STRUCTURES CAN BE INITILIZED LIKE THIS ALSO:-

struct  employee
{
	int code;
	float salary;
	char name[20];
};

int main(){
	struct employee harry = {100,45000.40,"Damon"},harsha;
	harsha=harry; 	//valid
	printf("Name is:%s\n",harry.name);
	printf("code is:%d\n",harry.code);
	printf("salary is:%f\n",harry.salary);
	printf("salary of harsha is %f\n",harsha.salary);
	return 0;
}