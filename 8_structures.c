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

// struct  employee
// {
// 	int code;
// 	float salary;
// 	char name[20];
// };

// int main(){
// 	struct employee harry = {100,45000.40 ,"Damon"},harsha;
// 	harsha=harry; 	//valid
// 	printf("Name is:%s\n",harry.name);
// 	printf("code is:%d\n",harry.code);
// 	printf("salary is:%f\n",harry.salary);
// 	printf("salary of harsha is %f\n",harsha.salary);
// 	return 0;
// }

//pg-6

// typedef int AGE;
// typedef char NAME[10];
// typedef float CGPA;
// typedef char Gender[10];
// typedef char ID[13];
// typedef char DEPT[4];

// struct student
// {
//         AGE my_age;
//         NAME my_name;
//         CGPA my_cgpa;
//         Gender my_gen;
//         ID my_id;
//         DEPT my_dept;
// };
// typedef struct student STUDENT;

// void main()
// {		
// 		int n;
// 		STUDENT st;
// 		printf ("Enter How many students\n");
//         scanf ("%d", &n);
// 		for (int i=0; i<n; i++){
//         printf("Enter the age\n");
//         scanf("%d",&st.my_age);
//         printf("Enter the CGPA\n");
//         scanf("%f",&st.my_cgpa);
//         printf("Enter the name \n");
//         scanf("%s",st.my_name);
//         printf("Enter the Id of the student \n");
//         scanf("%s",&st.my_id);
//         printf("Enter the department of the student \n");
//         scanf("%s",&st.my_dept);
//         printf("Enter the Gender\n");
//         scanf("%s",st.my_gen);
// 	}
//         for (int i=0; i<n; i++){
//         printf("Name of student is %s\n",st.my_name);
//         printf("Age of student is %d\n",st.my_age);
//         printf("CGPA of student is %f\n",st.my_cgpa);
//         printf("ID of student is %s\n",st.my_id);
//         printf("Department of student is %s\n",st.my_dept);
//         printf("Gender is %s\n",st.my_gen);
//     }
// }


//emloyee pg

// #include<stdio.h>
// #include<string.h>


// typedef char NAME[15];
// typedef int ID;

// struct employee  
// {     
//       ID emp_id;  
//       NAME emp_name;  
//       struct Date  
//       {  
//            int dd;  
//            int mm;  
//            int yyyy;   
//       }doj;  
// };  

// typedef struct employee EMPLOYEE;

// int main( )  
// {  
//         EMPLOYEE e;
//         e.emp_id=101;  
//         strcpy(e.emp_name, "Mr. Arjun");
//         e.doj.dd=12;  
//         e.doj.mm=08;  
//         e.doj.yyyy=2020;  
//         printf( "employee id : %d\n", e.emp_id);  
//         printf( "employee name : %s\n", e.emp_name);  
//         printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e.doj.dd, e.doj.mm,e.doj.yyyy);  
//        return 0;  
// }

//pg-3

// typedef int AGE;
// typedef char NAME[10];
// typedef char ID[13];
// typedef int CA1;
// typedef int CA2;
// typedef int CA3;

// struct marks
// {
//         CA1 quiz_marks;
//         CA2 assignment_marks; 
//         CA3 test1_marks;
// };
	
// typedef struct marks MARKS;

// struct student
// {
//         AGE my_age;
//         NAME my_name;
//         ID my_id;
//         MARKS m;  
// };

// typedef struct student STUDENT;

// int main()
// {
//         STUDENT st;
//         printf("Enter the age\n");
//         scanf("%d",&st.my_age);
//         printf("Enter the name \n");
//         scanf("%s",st.my_name);
//         printf("Enter the Id of the student \n");
//         scanf("%s",&st.my_id);
//         printf("Enter quiz marks of the student \n");
//         scanf("%d",&st.m.quiz_marks);
//         printf("Enter assignment marks of the student \n");
//         scanf("%d",&st.m.assignment_marks);
//         printf("Enter test one marks of the student \n");
//         scanf("%d",&st.m.test1_marks);
//         printf("Name of student is %s\n",st.my_name);
//         printf("Age of student is %d\n",st.my_age);
//         printf("ID of student is %s\n",st.my_id);
//         printf("quiz marks of student is %d\n", st.m.quiz_marks);
//         printf("assignment marks of student is %d\n",st.m.assignment_marks);
//         printf("test one marks of student is %d\n",st.m.test1_marks);
// }


union address{
	char street_name[20];
	int door_num;
	float cgpa;
}st1;

void main(){
	
st1.street_name="jaynagar";
printf("%s\n",st1.street_name);

st1.door_num=200;
printf("%d\n",st1.door_num);

st1.cgpa=8.9;
printf("%f",st1.cgpa);
}