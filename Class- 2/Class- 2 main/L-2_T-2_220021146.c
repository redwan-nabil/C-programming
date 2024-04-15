#include<stdio.h>

int main(){
    double a, b, c;

    printf("Write your length of three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == b && b == c && c == a){
        printf("The triangle is euilateral");
    }
    if(a == b || a == c || b == c){
        printf("The triangle is isosceles");
    }
    if(a != b || a != c || b != c){
        printf("The triangle is scalene");
    }

    return 0;
}
