#include<stdio.h>

// int main(){
// 	int i=20;
// 	int *j=&i;
// 	printf("the value of i=%d\n",i);
// 	printf("the value of i=%d\n",*j);
// 	//but to get the address v have to use format specifier
// 	printf("the address of i=%u\n",j);
// 	printf("the address of i=%u\n",&i);	
// }

//Practice set

// int main(){
// 	int a=5;
// 	int *b;
// 	b=&a;
// 	printf("the address of a=%u\n",b);
// 	printf("the value of a=%u\n",*b);

// }

//1.swapping of two numbers

// void swap(int *a, int *b);
// void wrong_swap(int a, int b);

// void main(){
// 	int a=3,b=4;
// 	printf("the value of a=%d and b=%d before swap\n",a,b);
// 	// wrong_swap(a,b); //call by value 
// 	swap(&a,&b);        //call by reference(address) 
// 	printf("the value of a=%d and b=%d after swap\n",a,b);
// }
// void wrong_swap(int a, int b){ //call by value 
// 	int temp;
// 	temp=a;//temp=3
// 	a=b;//a=4
// 	b=temp;//b=3
// }
// void swap(int *a,int *b){ //call by reference(address)
// 	int temp;
// 	temp=*a;//temp=3
// 	*a=*b;//a=4
// 	*b=temp;//b=3
// }


//2.write a program having a varible i.print the address of i.practice set formore

// void func(int j);

// int main(){
// 	int i=4;
// 	printf("the value of i=%d\n", i);
// 	func( i);
// 	printf("the address of i=%u\n", &i);
// 	return 0;
// }

// void func(int j){
// 	printf("the address of in function =%u\n", &j);
// }

//3.Calculate sum and avg using 2no.s using pointers;


// void sumAndavg(int a, int b, int *sum, float *avg );

// int main(){
// 	int i=3,j=6,sum;
// 	float avg;
// 	sumAndavg(i,j,&sum,&avg);
// 	printf("The value of sum is %d and average is %f\n",sum,avg);
// 	return 0;
// }

// void sumAndavg(int a, int b,int *sum,float *avg ){
// 	*sum = a+b;				//updated sum in main by a+b
// 	*avg=(float)*sum/2;		//updated avg 
// }

//4.pointer to pointer

// int main(){
// 	int i=35;
// 	int *ptr;
// 	int **ptr_ptr;

// 	ptr=&i;
// 	ptr_ptr=&ptr;
// 	printf("the value of i is %d\n",**ptr_ptr );
// 	return 0;
// }



//Pointer Arithmetic:-

//integer type:- one integer has four bytes so it will increase or decrease by 4 
//char type:- one char has 1 byte
//float type:- one float value has four bytes 
// int, float , char - value also depends on ur architecture

// int main(){
// 	// int i=35;
// 	// int *ptr=&i;
// 	char c=35;
// 	char *ptr=&c;

// 	printf("the address of ptr =%u\n", ptr);
// 	ptr++;
// 	// ptr--;
// 	printf("the address of ptr =%u\n", ptr);
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