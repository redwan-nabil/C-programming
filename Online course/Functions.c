#include<stdio.h>

int main(){
    sayHello();

    sayintroduce("Redwan", 17);
    sayintroduce("Nabil", 18);
    sayintroduce("Sohel", 45);
    sayintroduce("Saif vlo", 20);
    return 0;
}

void sayHello (){
    printf("Hello man");
}

void sayintroduce(char name[], int age){
    printf("Hello %s,\nmy age is %d\n\n", name, age);
}
