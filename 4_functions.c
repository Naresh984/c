#include <stdio.h>

// void display();  //function prototype or declration

// int main(){
// 	int a;
// 	printf("staritng display\n");
// 	display();   //function call
// 	printf("display function finished it's work\n");
// } 
// void display(){  //function definition     
// 	printf("the is display\n");
// }

//area of a square using library function

//You need to link with the math library:
//gcc -o file -lm     //-lm to link 

// #include <math.h>

// int main(){
// 	int side;
// 	printf("Enter the side:");
// 	scanf("%d", &side);
// 	printf("the area of the square =%.f", pow(side,2));
// 	return 0;	
// }

//Practice set
//1.write a function to calculate force of attraction on a body of mass exerted by earth

// float force(int m);

// int main(){
// 	int m;
// 	printf("Enter the mass of the body in kgs: ");
// 	scanf("%d", &m);
// 	printf("the force =%.2f", force(m));
// 	return 0;
// }

// float force(int m){
// 	return m*9.8;
// }


//2.write a program to calculate the avg of three no.s

// float avg(int a, int b, int c);

// float main(){
// 	int a,b,c;
// 	printf("Enter the value of a:");
// 	scanf("%d", &a);
// 	printf("Enter the value of b:");
// 	scanf("%d", &b);
// 	printf("Enter the value of c:");
// 	scanf("%d", &c);
// 	printf("the average of 3 number =%.2f",avg(a,b,c));
// }

// float avg(int a, int b, int c){
// 	return (a+b+c)/3;
	
// }

//RECURSIONS
//It is function ka andar same function.

// int factorial(int x);

// int main(){
// 	int a;
// 	printf("Enter the number: ");
// 	scanf("%d", &a);
// 	printf("The factorial of %d is %d", a, factorial(a));
// 	return 0;
// }

// int factorial(int x){
// 	printf("Calling factorial %d \n",x);
// 	if(x==0 || x==1){
// 		return 1;
// 	}
// 	else{
// 		return x * factorial(x-1);
// 	}
// }

//Practice set

//1.write a recursive function to calculate the sum of first n natural no.s

//basic logic - 1+2+3+.....n --- 

// int natural(int n);

// int main(){
// 	int num;
// 	printf("Enter the number:");
// 	scanf("%d", &num);
// 	printf("The sum=%d", natural(num));
// 	return 0;
// }

// int natural(int n){
// 	printf("called %d time\n",n); //This line should be commented
// 	if(n!=0){
// 		return n + natural(n-1);
// 	}
// 	else
// 		return n;
// }


//pattern printing
// *
// ***
// *****
// then i need
// 1-1 star
// 2-3 star
// 3-5 stars
//(2n-1)
void printPattern(int n);

int main(){
	int n=3;
	printPattern(n);
	return 0;
}

void printPattern(int n){
	if(n==1){
		printf("*\n");
		return;
	}
	printPattern(n-1);
	for(int i=0;i<(2*n-1);i++){
		printf("*");
	}
	printf("\n");
}