#include<stdio.h>

    char* token(int num){
        int a1 = num/100000%10;
        int a2 = num/10000%10;
        int a3 = num/1000%10;
        int a4 = num/100%10;
        int a5 = num/10%10;
        int a6 = num%10;

        if((a1+a2+a3) == (a4+a5+a6)){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
int main(){
    int num;
    printf("Enter a 6-digits ticket number: ");
    scanf("%d", &num);

    char* result = token(num);
    printf("Is the ticket luckey? %s\n", result);

    return 0;
}
