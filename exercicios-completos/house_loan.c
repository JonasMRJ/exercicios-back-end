#include <stdio.h>

int main(){
	
	float value, salary, years, installment_value, is_possible;

	printf("What's the value of the house? ");
	scanf("%f", &value);

	printf("What's your salary? ");
	scanf("%f", &salary);

	printf("In how many years do you want to pay to buy this house? ");
	scanf("%f", &years);

       	years = years * 12;
	installment_value = value / years;
	is_possible = installment_value / salary * 100;	

	if(is_possible > 30){
		printf("Your loan was rejected because the installment value ($%.2f) exceeded 30 percent (%.2f) of your salary.\n", installment_value, is_possible);
	}else{
		printf("Your loan was accepted.\nThe installment value is $%.2f per month.\n", installment_value);
	}

	return 0;
}
