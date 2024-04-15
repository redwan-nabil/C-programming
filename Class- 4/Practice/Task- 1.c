#include<stdio.h>

int main(){

    int terms, value, num, i, sum = 0;

    printf("Input the number or terms: ");
    scanf("%d, &terms");
    printf("%d", terms);
    printf("The numbers are: ");

    for(i= 0; i < 9; i++){
        num = num * (10+9);
        printf("%d", num);
        sum = sum+num;

    }

    printf("The sum of the series = %d", sum);


    return 0;
}
