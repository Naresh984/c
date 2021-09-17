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

int main(){
	char st[30];
	printf("ENter your name:");
	// scanf("%s",st);          	//here no need for &(address of) in scanf
	gets(st);
	printf("you name is %s",st);
}


