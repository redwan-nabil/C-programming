#include<stdio.h>

int main(){
    int round, AliceScore = 0, BobScore = 0, alicepoint, bobpoint;

    printf("Enter number of round: ");
    scanf("%d", &round);


    for(int i = 0; i < round; i++){

    scanf("%d %d", &alicepoint, &bobpoint);

        if(alicepoint > bobpoint){
            AliceScore ++;
        }
        else if(alicepoint < bobpoint){
            BobScore ++;
        }
    }


    if(AliceScore > BobScore){
            printf("\nAlice won the round");
            printf("Score is: %d & %d", AliceScore, BobScore);
    }
    else if(AliceScore < BobScore){
            printf("\nAlice won the round");
            printf("Score is: %d & %d", AliceScore, BobScore);
    }
    else{
        printf("\nThe round is draw");
        printf("%d & %d", AliceScore, BobScore);
    }

    return 0;
}
