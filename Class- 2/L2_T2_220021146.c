#include<stdio.h>

int main(){
    int time;
    char time2[3];
    printf("Enter a 24-hour time: ");
    scanf("%d:%s", &time, &time2);

    if(13<= time && time <= 24){

        printf("Equivalent 12-hour time: %d:%s PM", time - 12, time2);
    }
    if(1<= time && time <= 11){

        printf("Equivalent 12-hour time: %d:%s AM", time, time2);
    }
    if(time == 12){

        printf("Equivalent 12-hour time: 12:%s AM", time);
    }

    return 0;
}
