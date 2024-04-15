#include<stdio.h>
#include<math.h>

int main(){
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even square numbers are: ");
    for(i = 1; i * i <= n; i++){
        if((i * i) % 2 == 0){
                printf("\n%d", i * i);

        }
    }

    return 0;
}

