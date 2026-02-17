#include <stdio.h>

int main(){

    int car_type, days_rented;
    float total_km, dolPerKm, total;

    printf("What car type did you choose?\n1. Popular\n2. Luxury\n");
    scanf("%d", &car_type);

    printf("For how many days did you rent the car? ");
    scanf("%d", &days_rented);
    
    printf("How many kilometers did you run with it? ");
    scanf("%f", &total_km);

    if(car_type == 2){
        if(total_km > 200){
            dolPerKm = 0.25;
            total = days_rented * 150 + total_km * dolPerKm;
            printf("The total cost is $%.2f ($150 per day, $%.2f per km)\n", total, dolPerKm);
        }else{
            dolPerKm = 0.3;
            total = days_rented * 150 + total_km * dolPerKm;
            printf("The total cost is $%.2f ($150 per day, $%.2f per km)\n", total, dolPerKm);
        }
    }else{
        if(total_km > 100){
            dolPerKm = 0.1;
            total = days_rented * 90 + total_km * dolPerKm;
            printf("The total cost is $%.2f ($90 per day, $%.2f per km)\n", total, dolPerKm);
        }else{
            dolPerKm = 0.2;
            total = days_rented * 90 + total_km * dolPerKm;
            printf("The total cost is $%.2f ($90 per day, $%.2f per km)\n", total, dolPerKm);
        }
    }

    return 0;
}