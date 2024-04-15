#include<stdio.h>

int main(){
    int num, i, ans = 0;

    printf("Write any integer number: ");
    scanf("%d", &num);

    for(i = 2; i <= num / 2; i++){
        if(num % i == 0){
            ans = 1;
            break;
        }
    }

    if(ans == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
