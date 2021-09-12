#include <stdio.h>
#include <stdlib.h> //header file --library to get rand to generate rand funciton
#include <time.h>

int main(){
	int num,guess,nguess=1;
	srand(time(0));
	num=rand()%100 + 1; //generate random no. betwen 1 and 100--realte the reaminder
	// printf("the numbe is %d\n",num );

	//running the loop until the number is guessed

	do{
		printf("Guess the number between 1 and 100:\n");
		scanf("%d", &guess);

		if(guess>num){
			printf("Lower number please\n");
		}
		else if(guess<num){
			printf("Larger number please\n");
		}
		else if(guess==num){
			printf("You guessed it in %d attempt\n",nguess);
		}
		nguess++;// to guess the attempt someone guessed at
	}while(guess!=num);
}