#include<stdio.h>


int countDivisors(int);

int main(){
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    int amountDivisors = countDivisors(num);

    printf("Number of divisors occuring within the interger: %d\n", amountDivisors);

    return 0;
}

int countDivisors(int num){
    int count = 0, digit;
    while(num != 0){
        digit = num % 10;
        if(digit != 0 && num % digit == 0){
            count++;
            num /= 10; // Remove the rightmost digit
        }

        return count;
    }
}





