#include<stdio.h>

float MaxNum(float n1, float n2, float n3);

float n1, n2, n3;

int main(){
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    float findMax = MaxNum(n1, n2, n3);
    printf("\n%0.2f The largest number", findMax);

    return 0;
}

float MaxNum(float n1, float n2, float n3){
    if(n1 > n2 && n1 > n3){
        return n1;
    }
    else if(n2 > n1 && n2 > n3){
        return n2;
    }
    else if(n3 > n1 && n3 > n2){
        return n3;
    }
}
