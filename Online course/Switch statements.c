#include<stdio.h>

int main(){

    char grade = 'D';

    switch(grade){
        case 'A' :
            printf("You did great! ");
            break;
        case 'B' :
            printf("You did alright! ");
            break;
        case 'D' :
            printf("You did poorly! ");
            break;
        case 'F' :
            printf("You did Failed! ");
            break;
        default :
            printf("Invalid Grade");
    }

    return 0;
}
