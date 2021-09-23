#include <stdio.h>
// string is a 1-D character arrray terminated by a null('\0')

// int main(){
// 	char str[]="intel"; 
// 	// char str[]={'I','N','T','E','L','\0'};
// 	char *ptr = str;
// 	while(*ptr!='\0'){
// 		printf("%c", *ptr);
// 		*ptr++;
// 	}
// 	return 0;
// }

//PRINTING THE STRING:-
//How do i print now it's too lengthhhy
//instead of printing like above 

// int main(){
// 	char st[]="amd";
// 	printf("%s", st);
//  return 0;
// }


//INPUTTING STRINGS:-

// int main(){
// 	char st[30];
// 	printf("ENter your name:");
// 	// scanf("%s",st);          	//here no need for &(address of) in scanf
// 	fgets(st,30,stdin); 			//to read mulit-word string 
	
// 	// printf("you name is %s",st);
// 	puts(st);						// just like printf 
// }

//STANDARD libray functions for strings:-

#include <string.h>

//strlen
// int main(){
// 	char st[]="hello goolge";
// 	int a = strlen(st);  			//1.count no. of characters exculding the null char
// 	printf("the length of the string is %d",a);
// 	return 0;
// }

//strcpy -- is used to copy the one string in another string 
// int main(){
// 	char st[]="string one";
// 	char st2[40];
// 	strcpy(st2,st);
// 	printf("this is %s",st2);
// }

//strcat -- is used to concatenate
// int main(){
// 	char st1[]="hello";
// 	char st2[]=" google";
// 	strcat(st1,st2);
// 	printf("this is %s\n",st1);
// }

//strcmp -- is used to compare

// int main(){
// 	char st1[]="hello";
// 	char st2[]="google";
// 	int value =strcmp(st1,st2);
// 	printf("this is %d\n",value);
// 	if(value==0){
// 		printf("the above strings are same\n");
// 	}
// 	else{
// 		printf("the above strings are not same\n");
// 	}
//  return 0;
// }


//PRACTICE SET:-

//1.write a pg to encrypt the string by adding 1 to ascii value of its characters.


// void encrypt(char *c){
// 	char *ptr=c;
// 	while(*ptr!='\0'){
// 		*ptr=*ptr+1;    // for decryption just do -1 one
// 		*ptr++;
// 	}
// }

// int main(){
// 	char c[]="secrete code is STRING101";
// 	encrypt(c);
// 	printf("the encrypted string is :%s",c);
// 	return 0;
// }


//2.write a program to count the occurence of a given character in a string 

// int occurence(char *st,char c){
	
// 	char *ptr=st;
// 	int count =0;
// 	while(*ptr!='\0'){
// 		if(*ptr==c){
// 			count++;
// 		}
// 		*ptr++;
// 	}
// 	return count;
// }

// int main(){
// 	char st[]="intttel";
// 	int count = occurence(st,'t');
// 	printf("occurence is:%d times\n",count);
// 	return 0;
// }


