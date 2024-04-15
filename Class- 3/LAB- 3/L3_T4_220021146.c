#include<stdio.h>

int main(){
    int  i, num, amount = 0;
    printf("Enter your any integer number: ");
    scanf("%d", &num);

    for(i = 2; i < num; i++){
        if(num % i == 0){
            amount = 1;
            break;
        }
    }

    if(amount == 1){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}
