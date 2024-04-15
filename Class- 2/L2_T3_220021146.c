#include<stdio.h>

int main(){
    float n1, n2, n3;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3){
        printf("\n%f is the largest number", n1);
    }
    if(n2 > n1 && n2 > n3){
        printf("\n%f is the largest number", n2);
    }
    if(n3 > n1 && n3 > n2){
        printf("\n%f is the largest number", n3);
    }

    if(n1 < n2 && n1 < n3){
        printf("\n%f is the smallest number", n1);
    }
    if(n2 < n1 && n2 < n3){
        printf("\n%f is the smallest number", n2);
    }
    if(n3 < n1 && n3 < n2){
        printf("\n%f is the smallest number", n3);
    }
    return 0;
}
