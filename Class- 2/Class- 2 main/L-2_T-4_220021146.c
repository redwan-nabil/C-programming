#include<stdio.h>

int num(int, int, int);
int a, b, c;

int main(){
    int result;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = num(a, b, c);
    printf("%d", result);
return 0;
}

int num(int a, int b, int c){
    if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 ){
        printf("\nAll of the number is even");
    }
    else if((a % 2 == 0 && b % 2 == 0 && c % 2 != 0) || (a % 2 == 0 && b % 2 != 0 && c % 2 == 0) || (a % 2 != 0 && b % 2 == 0 && c % 2 == 0)){
        printf("\n2 of the number is even");
        printf("\n1 of the number is odd");
    }
    else if((a % 2 == 0 && b % 2 != 0 && c % 2 != 0) || (a % 2 != 0 && b % 2 == 0 && c % 2 != 0) || a % 2 != 0 && b % 2 != 0 && c % 2 == 0){
        printf("\n1 of the number is even");
        printf("\n2 of the number is odd");
    }
    else if(a % 2 != 0 && b % 2 != 0 && c % 2 != 0 ){
        printf("All of the number is odd");
    }


}
