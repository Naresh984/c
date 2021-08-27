// #include <stdio.h>

// void main()
// {
// 	int a,b,add,mul,div,mod,sub;

// 	printf("Enter the two no.s\n");
// 	scanf("%d%d", &a,&b);

// 	add=a+b;
// 	printf("Sum of two numbers a=%d and b=%d is =%d\n", a,b,add);
// 	sub=a-b;
// 	printf("Subtraction of two numbers a=%d and b=%d is =%d\n", a,b,sub);
// 	mul=a*b;
// 	printf("Multiplication of two numbers a=%d and b=%d is =%d\n", a,b,mul);
// 	div=a/b;
// 	printf("Division of two numbers a=%d and b=%d is =%d\n", a,b,div);
// 	mod=a%b;
// 	printf("Remainder of two numbers a=%d and b=%d is =%d\n", a,b,mod);
// }

//Using user-defined functions;
#include <stdio.h>
void airthematic_op(int a, int b);//function declration
void main()
{
	int a,b;
	printf("Enter the two numbers:\n");
	scanf("%d%d", &a,&b);
	airthematic_op(a,b);//function call or invocation
}
void airthematic_op(int a, int b)//function defination
{
	int addd;
	addd=a+b;
	printf("the addition of 2 numbers=%d\n",addd);
}
