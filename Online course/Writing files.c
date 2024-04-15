#include<stdio.h>

int main(){

    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, My name is Redwan Nabil.");

    fclose(fpointer);
    return 0;
}
