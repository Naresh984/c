#include<stdio.h>

// int main(){
// 	long and time taking process
// 	int marks1, marks2,marks3,...... and so on; 

// }

//using arrays:-

// int main(){
// 	int marks[4];
// 	marks[0]=34;
// 	marks[1]=45;
// 	marks[2]=67;
// 	marks[3]=78;
// }

//1.Array input using loops:- to accept marks of 5 students in an array and print them

// int main(){
// 	int marks[5], i;

// 	for(i=0;i<5;i++){
// 		printf("Enter the marks for student %d:\n",i+1);// here i+1 for user to read from 1
// 		scanf("%d", &marks[i]);
// 	}
// 	for(i=0;i<5;i++){
// 		printf("The value of marks for student %d is %d\n",i+1,marks[i]);
// 	}
// }


//2.Subtraction of one pointer from another:-

// int main(){
// 	int i=69,j=67;
// 	int *a=&i,*b=&j;
// 	printf("the address of pointer 1 =%u\n",a);
// 	printf("the address of pointer 2 =%u\n",b);
// 	printf("subtraction of two pointers=%d\n",a-b);
// }

//3.Comparison of two pointers:-

// int main(){
// 	int i=30,j=30;
// 	int *a=&i,*b=&j;

// 	if(a==b){
// 		printf("the have same address which is %u",a);
// 	}
// 	else{
// 		printf("the have different address a=%u and b=%u \n",a,b);
// 	}
// }

//PASSING arrays to functions;-

// void printArray(int *ptr, int n);

// int main(){
// 	int arr[]={1,34,34,56,78,456,234};
// 	printArray(arr,7);
// 	return 0;
// }

// void printArray(int *ptr, int n){
// 	for(int i=0;i<n;i++){
// 		printf("the value of element %d is %d\n", i+1, *(ptr+i));
// 	}													
// }

// //explanation:-
// i+1 will start from 1 instead of 0.
// *(ptr+i)- when i=0 it will refer 0 element then 1st then 2nd and soo on


//2d ARRAYS:- create a 2d array by taking input from user and display function to print the content
// 


// int main(){
// 	int n_students=3;
// 	int n_subjects=4;
// 	int marks[3][4]; //declaring a 2d array

// 	for(int i=0;i<n_students;i++){
// 		for(int j=0;j<n_subjects;j++){
// 			printf("Enter the marks for student %d in subject %d\n",i+1,j+1);
// 			scanf("%d",&marks[i][j]);
			
// 		}
// 	}
// 	for(int i=0;i<n_students;i++){
// 		for(int j=0;j<n_subjects;j++){
// 			printf("the marks for student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
// 		}
// 	}
// 	return 0;
// }


//Practice SET:-

//1.verify using pointer arithmetic that (ptr+2) points to the 3rd element.

// int main(){
// 	int new, numbers[10]={23,34,45,546,232,6,7,8,9,100};
// 	int *ptr=&numbers[0];

// 	printf("the number is %d\n", *ptr+2);
// 	return 0;
// }

//2.write a pr to create array of 10 integers and store mulitplication table of 5.

// int main(){
// 	int arr[10],n,i,t;

// 	printf("Enter the number:");
// 	scanf("%d",&n);

// 	for(i=0;i<10;i++){
// 		arr[i]=n*(i+1);
// 	}
// 	for(i=0;i<10;i++){
// 		printf("%d * %d = %d\n",n,i+1,arr[i]);
// 	}
// 	printf("%d",arr[4]);
// 	return 0;
// }


//3.write a pr containing a function which reverses the array passed to it

// void reverse(int *arr, int n);

// int main(){
// 	int arr[5]={1,2,3,4,5};
// 	reverse(arr,5);
// 	for(int i=0;i<5;i++){
// 		printf("after reverse %d\n", arr[i]);
// 	}
// 	return 0;
// }

// void reverse(int *arr, int n){
// 	for(int i=0;i<n/2;i++){ 		// n/2  bcz after half it will reverse it no need to do it full
// 		int temp;
// 		temp =arr[i];
// 		arr[i]=arr[n-i-1];
// 		arr[n-i-1]=temp;
// 	}
// }


//4.create an array of size 3*10 containg tables of nos 2,7,9

//read the program properly to understand

// void printable(int *multable,int num, int n);

// int main(){
// 	int multable[0][10];
// 	printable(multable[0],2,10);
// 	printable(multable[1],7,10);
// 	printable(multable[2],9,10);
// 	return 0;
// }

// void printable(int *multable,int num, int n){
// 	printf("THe multiplication table of %d:\n",num);
// 	for(int i=0;i<n;i++){
// 		multable[i]=num*(i+1);
// 	}
// 	for(int i=0;i<n;i++){
// 		printf("%d * %d = %d\n",num,i+1,multable[i]);
// 	}
// 	printf(" \n\n");	
// }

//5.create a 3D array and print it's elements in increasing order