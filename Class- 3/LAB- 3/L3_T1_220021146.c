#include<stdio.h>

int main(){
    int num, i, sum = 0;
    printf("Enter any integer number: ");
    scanf("%d", &num);

    for(i = num; i > 0; i = i/10){

        sum = sum + i % 10;
    }

    printf("Sum of the digits: %d", sum);


    return 0;
}
