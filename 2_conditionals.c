#include <stdio.h>

//student:-pass or fail 

// int main()
// {
// 	int chem, math, phy, totalper;
// 	printf("enter marks scored in chemistry:");
// 	scanf("%d", &chem);
// 	printf("enter marks scored in maths:");
// 	scanf("%d", &math);
// 	printf("enter marks scored in physics:");
// 	scanf("%d", &phy);
//  	totalper=chem+math+phy;

// 	if(chem<33 || math<33 || phy<33 || totalper<120)
// 	{
// 		printf("you have failed");
// 	}
// 	else
// 	{
// 		printf("you have passed");
// 	}

// }

//leap year or not

// int main()
// {
// 	int l;
// 	printf("Enter the YEAR:");
// 	scanf("%d", &l);

// 	if(l%400==0)
// 	{
// 		printf("%d is a leap year",l);
// 	}
// 	else if(l%100==0)
// 	{
// 		printf("%d is not a leap year",l);
// 	}
// 	else if(l%4==0)
// 	{
// 		printf("%d is a leap year",l);
// 	}
// 	else
// 	{
// 		printf("%d is not a leap year",l);
// 	}
// }

//lower case or not

int main()
{
	char ch;
	// 97-122=a-z ascii
	printf("Enter the character:");
	scanf("%c", &ch);
	if(ch<=122 && ch>=97){
		printf("it is in lower case\n");
	}
	else {
		printf("it is not lower case\n");
	}
}