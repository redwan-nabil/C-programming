#include<stdio.h>


int main(){

    char nb[20] = "Redwan Nabil";

    printf("%c\n", *nb);

    printf("%c\n", *(nb+1));


    char *pt;
    pt = nb;

    printf("%c\n", *nb);
    printf("%c", *(nb+10));

    /*printf("Enter your name: ");
    fgets(nb, sizeof(nb), stdin);

    myName(nb);*/

    return 0;
}

void myName(char nb[]){
    puts(nb);
}

