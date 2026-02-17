#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));

	int max, min, userChoice, computerChoice;

	max = 3;
	min = 1;

	computerChoice = (rand() % (max - min + 1) + min);

	printf("What do you choose?\n1. Rock\n2. Paper\n3. Scissors\n");
	scanf("%d", &userChoice);

	if(userChoice == 1 && computerChoice == 3){
		printf("Rock beats scissors! User wins.\n");
	}else if(userChoice == 2 && computerChoice == 1){
		printf("Paper beats rock! User wins.\n");
	}else if(userChoice == 3 && computerChoice == 2){
		printf("Scissors beats paper! User wins.\n");
	}else if(computerChoice == 1 && userChoice == 3){
		printf("Rock beats scissors! Computer wins.\n");
	}else if(computerChoice == 2 && userChoice == 1){
		printf("Paper beats rock! Computer wins.\n");
	}else if(computerChoice == 3 && userChoice == 2){
		printf("Scissors beats paper! Computer wins.\n");
	}else{
		printf("And that's a tie.");
	}
	
	return 0;
}
