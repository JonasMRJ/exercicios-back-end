#include <stdio.h>

int main(){
	
	float salary, gender, years, new_salary;

	printf("What's your current salary? ");
	scanf("%f", &salary);

	printf("What's your gender?\n1. Male\n2. Female\n");
	scanf("%f", &gender);

	printf("For how many years have you been working on this company? ");
	scanf("%f", &years);

	if(gender == 2){
		if(years > 20){
			new_salary = salary + salary * 23 / 100;
			printf("Your new salary is $%.2f (23 percent increase)\n", new_salary);
		}else if(years > 15 && years < 20){
			new_salary = salary + salary * 12 / 100;
			printf("Your new salary is $%.2f (12 percent increase)\n", new_salary);
		}else{
			new_salary = salary + salary * 5 / 100;
			printf("Your new salary is $%.2f (5 percent increase)\n", new_salary);
		}
	}else if(gender == 1){
		if(years > 30){
			new_salary = salary + salary * 25 / 100;
			printf("Your new salary is $%.2f (25 percent increase)\n", new_salary);
		}else if(years > 20 && years < 30){
			new_salary = salary + salary * 13 / 100;
			printf("Your new salary is $%.2f (13 percent increase)\n", new_salary);
		}else{
			new_salary = salary + salary * 3 / 100;
			printf("Your new salary is $%.2f (3 percent increase)\n", new_salary);
		}
	}else{
		printf("Invalid. Try again\n");
	}

	return 0;
}
