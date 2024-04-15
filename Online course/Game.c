#include<stdio.h> 
int main(){
    char color[10];
    char peopleF[30];
    char peopleL[30];
    char noun[20];

    printf("Enter your favorite color: ");
    scanf("%s", &color);
    printf("Enter your favorite people: ");
    scanf("%s%s", &peopleF, peopleL);
    printf("Enter your favorite noun: ");
    scanf("%s", &noun);

    printf("Rose are %s\n", color);
    printf("I like %s %s\n", peopleF, peopleL);
    printf("Phones are %s\n", noun);

    return 0;
}
