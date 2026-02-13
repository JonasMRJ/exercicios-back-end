#include <stdio.h>
#include <math.h>

int main(){

    float weight, height, bmi;

    printf("What's your weight (kg)? ");
    scanf("%f", &weight);

    printf("What's your height (m)? ");
    scanf("%f", &height);

    bmi = weight / pow(height, 2);

    if(bmi > 40){
        printf("You're morbid obese (BMI of %.2f)\n", bmi);
    }else if(bmi > 30 && bmi < 40){
        printf("You're obese (BMI of %.2f)\n", bmi);
    }else if(bmi > 25 && bmi < 30){
        printf("You're overweight (BMI of %.2f)\n", bmi);
    }else if(bmi > 18.5 && bmi < 25){
        printf("You're in the ideal weight (BMI of %.2f)\n", bmi);
    }else{
        printf("You're underweight (BMI of %.2f)\n", bmi);
    }

    return 0;
}
