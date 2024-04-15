#include<stdio.h>
#include<stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa

};

int main(){

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy ( student1.name, "NAbil");
    strcpy ( student1.major, "BUsiness");

    struct Student student2;
    student2.age = 35;
    student2.gpa = 3.9;
    strcpy ( student2.name, "Redwan");
    strcpy ( student2.major, "science");

    printf("%d", student2.age);
    return 0;

}
