#include <stdio.h>

int main(){

    char name[20];
    printf("Enter your name: ");
    fgets(name, 30, stdin);
    printf("your name is %s\n ", name);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("your name is %s\n ", name);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("You are %f years old\n", gpa);
    return 0;
}

