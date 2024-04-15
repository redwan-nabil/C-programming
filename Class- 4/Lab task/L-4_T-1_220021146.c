#include <stdio.h>

int main(){
    int num, digit, fact, sum = 0, tempnum;

    printf("Input your number: ");
    scanf("%d", &num);
    tempnum = num;

    while(num != 0){
        digit = num % 10;
        fact = 1;
        for(int j= 1; j<= digit; j++){

            fact = j * fact;

        }
        sum += fact;
        num = num / 10;
    }

    if(tempnum == sum){
        printf("The number is strong");
    }
    else{
        printf("The number is not strong");
    }

    return 0;
}
