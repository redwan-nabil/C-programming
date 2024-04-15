#include <stdio.h>

int main(){
    int aliceRun, bobRun, alicePoint, bobPoint, n;
    alicePoint = 0;
    bobPoint = 0;

    printf("Enter number of race: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d %d", &aliceRun, &bobRun);
        if(aliceRun > bobRun){
            alicePoint +=1;
        }else if (aliceRun < bobRun) {
            bobPoint += 1;
        }
    }
    
    if (alicePoint == bobPoint){
        printf("Draw\n");
        printf("%d %d", alicePoint, bobPoint);
    }else if(alicePoint > bobPoint){
        printf("Alice wins\n");
        printf("%d %d", alicePoint, bobPoint);
    }else{
        printf("Bob wins\n");
        printf("%d %d", alicePoint, bobPoint);
    }
}
