#include<stdio.h>

int max(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;


    }
    else{
        result = num2;

    }
    return result;
}

int max2(int NUM1, int NUM2, int NUM3){
    int Result;
    if(NUM1>= NUM2 && NUM1>=NUM3){
        Result = NUM1;
    }
    else if(NUM2>=NUM1 && NUM2>=NUM3){

        Result = NUM2;
    }
    else{
        Result = NUM3;
    }


    return Result;
}

int main(){

    printf("%d", max(0, 10));
    printf("%d\n", max2(0, 2, 3));
    return 0;
}
