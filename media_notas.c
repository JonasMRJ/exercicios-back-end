#include <stdio.h>

int main(){
	
	float first_grade;
	float second_grade;
	float medium;

	printf("What was your first grade (0-10)? ");
	scanf("%f", &first_grade);

	printf("What was your second grade (0-10)? ");
	scanf("%f", &second_grade);

	medium = (first_grade + second_grade) / 2;

	if(medium > 7){
		printf("You have a good use of your grades (your medium is higher than 7).\n");
	}else{
		printf("You did not have a good use of your grades (your medium is not higher than 7).\n");
	}

	return 0;
}
