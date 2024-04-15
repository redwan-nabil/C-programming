#include<stdio.h>

int main(){

    char palin[20];
    scanf("%s", palin);

    int l=0, h= strlen(palin)-1;

    while (h > 1){
        if(palin[l++] != palin[h--]){
            printf("%s is not a palindrome\n", palin);
            return 0;
        }
    }
    printf("%s is a palindrome\n.", palin);

    return 0;
}
