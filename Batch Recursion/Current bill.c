#include<stdio.h>
#include<math.h>

int main(){
    float unit, unit_price, charge, total_bill;
    printf("Write your uses unit: ");
    scanf("%f", &unit);

    if(unit < 200){
        unit_price = 1.2;
    }
    else if((unit < 400)){
        unit_price = 1.5;
    }
    else if((unit < 600)){
        unit_price = 1.8;
    }
    else{
        unit_price = 2;
    }


    if(total_bill >=400){
        charge= total_bill*0.15;
    }
    if(total_bill < 100){
        total_bill = 100;
    }

    total_bill = unit*unit_price;

    total_bill += charge;

    printf("Total use: %f", unit);
    printf("Charge per unit: %f", unit_price);
    printf("sub charge: %f", charge);
    printf("Total Bill: %f\n", total_bill);


    return 0;
}
