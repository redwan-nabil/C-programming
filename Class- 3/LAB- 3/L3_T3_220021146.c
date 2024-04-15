#include<stdio.h>

int main(){
    int  i, num, digit, count = 0;
    printf("Enter your any integer number: ");
    scanf("%d", &num);

    for(i = num; i > 0; i = i / 10){
        digit = i % 10;
        if( num % digit == 0){
            count++;
        }
    }
    printf("amount of Divisors is: %d", count);

    return 0;
}
