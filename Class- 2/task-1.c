#include<stdio.h>

int main(){
    double amount;
    double result;
    printf("Enter value of trade: ");
    scanf("%lf", &amount);
    printf("%lf\n", amount);

    if(amount < 2500){
        result = 30 + ((1.7/100)*amount);
        printf("Commission: $%f\n", result);
    }
    if(2500 < amount && amount < 6250){
        result = 56 + ((0.66/100)*amount);
        printf("Commission: $%f\n", result);
    }
    if(6250 < amount && amount < 20000){
        result = 76 + ((0.34/100)*amount);
        printf("Commission: $%f\n", result);
    }
    if(20000 < amount && amount < 50000){
        result = 100 + ((0.22/100)*amount);
        printf("Commission: $%f\n", result);
    }
    if(50000 < amount && amount < 500000){
        result = 155 + ((0.11/100)*amount);
        printf("Commission: $%f\n", result);
    }
    if(amount > 500000){
        result = 255 + ((0.09/100)*amount);
        printf("Commission: $%f\n", result);
    }

    return 0;

}
