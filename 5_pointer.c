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

int main(){
	int a=5;
	int *b;
	b=&a;
	printf("the address of a=%u\n",b);
	printf("the value of a=%u\n",*b);

}


