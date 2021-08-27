#include <stdio.h>

void main()
{
	int a,b,r1,r2;
	printf("Enter the values of a and b \n");
	scanf("%d%d", &a,&b);

	printf("Original value of a=%d and b=%d\n",a,b);

	r1=++a + --b;
	printf("After preincrement of a=%d and predecrement of b=%d is =%d\n",a,b,r1);

	r2=a++ + b--;
	printf("After postincrement of a=%d and postdecrement of b=%d is =%d\n",a,b,r2);




}