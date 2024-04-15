#include<stdio.h>

int main(){
    int num, sum = 0, digit;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while(num != 0){

        digit = num % 10;
        // This uses the modulus operator (%) to get the remainder of num divided by 10, which is the last digit

        sum += digit;
        num /= 10;
    }

    printf("Sum of digits %d\n", sum);

    return 0;
}
