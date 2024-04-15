#include<stdio.h>

int main(){
    int num, i;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("The even square numbers are: ");
    for(i = 1; i * i <= num ; i++){
        if((i * i) % 2 == 0){
            printf("\n%d", i * i);
        }
    }


    return 0;
}
